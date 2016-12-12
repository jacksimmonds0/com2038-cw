#include "Breed.h"
#include <string>

Breed::Breed(std::string name, std::string color, std::string bn, Dog * dd, Dog * md) : Dog(name, color, dd, md){
	name = name;
	color = color;
	breedName = bn;
	
}

Breed::~Breed(){

}