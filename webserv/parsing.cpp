#include "webserv.hpp"


std::string findHost(const std::string& request) 
{
    std::string host;
    std::size_t pos = request.find("Host:");
    if (pos != std::string::npos) {
        // Trouvé le champ Host:, chercher le contenu jusqu'à la fin de la ligne
        pos = request.find_first_not_of(" ", pos + 5); // Ignorer "Host:" et les espaces
        std::size_t end_pos = request.find("\r\n", pos); // Fin de la ligne
        if (end_pos != std::string::npos) {
            host = request.substr(pos, end_pos - pos);
        }
    }
    else 
        host = "localhost";
    std::string::size_type last_pos = host.find_last_not_of("\r\n");
    if (last_pos != std::string::npos)
        host.erase(last_pos + 1);
    return host;
}

bool is_cgi_script(const std::string& path) 
{
    static const std::string cgi_extension = ".cgi";

    if (path.size() >= cgi_extension.size() &&
        path.compare(path.size() - cgi_extension.size(), cgi_extension.size(), cgi_extension) == 0) {
        return true;
    }

    return false;
}

void handle_cgi_script(int client_socket, std::string script_path, std::string request) {
    std::string formData = parseMultipartFormData(request);
    if (formData.empty()) 
        throw InvalidFormDataException();
    
    script_path.insert(0, "/Users/thsehl/Documents/webserv-1");
    //std::cout << formData << std::endl;
    
    // Écrire les données du formulaire dans un fichier temporaire
    std::ofstream tempFile("temp_form_data.txt", std::ios::binary);
    tempFile << formData;
    tempFile.close();

    // Créer un tableau d'arguments pour execve
    const char *args[] = {
        "/usr/bin/python3", // Chemin vers l'interpréteur Python
        script_path.c_str(), // Chemin absolu du script CGI Python
        "temp_form_data.txt", // Chemin du fichier contenant les données du formulaire
        nullptr // Marqueur de fin de tableau
    };

    pid_t pid = fork();
    if (pid < 0)
        throw ForkFailedException();
    else if (pid == 0) {    
        // Exécuter le script Python
        execve("/usr/bin/python3", const_cast<char**>(args), nullptr);

        // Si execve échoue, lancez une exception
        throw ExecFailedException();
    } else {
        // Attendre la fin de l'exécution du script CGI
        int status;
        waitpid(pid, &status, 0);
        std::string response;
        if (WIFEXITED(status) && WEXITSTATUS(status) == 0) 
            response = "HTTP/1.1 200 OK\r\n";
        else
            response = "HTTP/1.1 500 Internal Server Error\r\n\r\n";
        response += "Content-Type: text/html\r\n";
        response += "\r\n"; // Ligne vide indiquant la fin des en-têtes
        response += "<!DOCTYPE html>\n";
        response += "<html>\n";
        response += "<head>\n";
        response += "<title>Titre de la page</title>\n";
        response += "</head>\n";
        response += "<body>\n";
        if (response.find("200") != std::string::npos)
            response += "<h1>Upload succesfull</h1>\n";
        else
            response += "<h1>Upload failed</h1>\n";
        response += "</body>\n";
        response += "</html>\n";
        send(client_socket, response.c_str(), response.length(), 0);
        // Supprimer le fichier temporaire
        std::remove("temp_form_data.txt");
    }
    close(client_socket);
}






int parsing_request(std::string request, int client_fd, Server server)
{
    if(isspace(request[0]))
        return 0;
    std::vector<std::string> data = split(request, ' ');
    /*std::cout << data[0] << std::endl;
    std::cout << data[1] << std::endl;*/
    if (is_cgi_script(data[1]))
        handle_cgi_script(client_fd, data[1], request);
    else
        handle_requests(data, client_fd, server.getVecLocation(), server);
    return 1;
}

std::vector<std::string> split(const std::string &s, char delim) 
{
    std::vector<std::string> tokens;
    std::istringstream iss(s);
    std::string token;

    while (std::getline(iss, token, delim))
        tokens.push_back(token);
    return tokens;
}

