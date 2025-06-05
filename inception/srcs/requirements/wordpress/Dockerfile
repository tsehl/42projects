# Pull latest debian:buster image
FROM	debian:buster

# Update & upgrade + install php, php-fpm, php-mysql and curl
RUN	apt-get update -y && \
	apt-get upgrade -y && \
	apt-get install -y php7.3 php7.3-fpm php7.3-mysql curl
	#apt-get update && \
	#apt-get -y install lsb-release ca-certificates curl && \
	#curl -sSLo /usr/share/keyrings/deb.sury.org-php.gpg https://packages.sury.org/php/apt.gpg && \
	#sh -c 'echo "deb [signed-by=/usr/share/keyrings/deb.sury.org-php.gpg] https://packages.sury.org/php/ $(lsb_release -sc) main" > /etc/apt/sources.list.d/php.list' && \
	#apt-get update && \

# Create standard repo
RUN	mkdir -p /var/www/wordpress
RUN	mkdir -p /run/php

# Copy config file
COPY	tools/www.conf /etc/php/7.3/fpm/pool.d

# Copy script and make it executable
WORKDIR	/var/www/wordpress
COPY	./tools/script.sh /tmp/
RUN	chmod +x /tmp/script.sh

# Fetch Wordpress CLI
RUN	curl -O https://raw.githubusercontent.com/wp-cli/builds/gh-pages/phar/wp-cli.phar
RUN	php wp-cli.phar --info && \
	chmod +x wp-cli.phar && \
	mv wp-cli.phar /usr/bin/wp

# Download WP CLI
RUN	wp core download --allow-root --path=/var/www/wordpress
RUN	chown -R www-data:www-data /var/www/wordpress

# Run script that installs wordpress
CMD ["sh", "/tmp/script.sh"]
