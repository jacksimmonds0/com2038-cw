#include <Breed.h>
#include <Dog.h>

Breed::Breed(std::string name, std::string color, Dog * dad, Dog * mom, breedName bn){
	name = name;
	color = color;
	dad = dad;
	mom = mom;
	breedName = bn;
}

Breed::~Breed(){
	
}