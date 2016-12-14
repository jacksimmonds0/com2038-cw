#include "Breed.h"
#include <string>

using namespace std;

Breed::Breed(string name, string color, string bn) : Dog(name, color){
	name = name;
	color = color;
	breedName = bn;
}

Breed::~Breed(){

}