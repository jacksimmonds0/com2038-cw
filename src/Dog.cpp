#include "Dog.h"
#include <string>

Dog::Dog(std::string n, std::string c, Dog * dd, Dog * md){
	name = n;
	color = c;
	dad = dd;
	mom = md;
}

Dog::~Dog(){

}

