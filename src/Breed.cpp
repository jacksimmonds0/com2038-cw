#include "Breed.h"
#include <string>

Breed::Breed(std::string name, std::string color, std::string bn) : Dog(name, color){
	name = name;
	color = color;
	breedName = bn;
}

Breed::~Breed(){

}