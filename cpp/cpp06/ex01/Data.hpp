#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

typedef struct {
	int			age;
	std::string	name;
}			Data;

class Serializer {

    public:

        static uintptr_t	serialize(Data* ptr);
        static Data		*deserialize(uintptr_t raw);
};

#endif