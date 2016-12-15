#include "Breed.h"
#include <string>
#include <stdexcept>

using namespace std;

Breed::Breed(string name, string color, string bn) : Dog(name, color){
	name = name;
	color = color;
	if(bn.compare("Husky") ==0 || bn.compare("Corgi") == 0 || bn.compare("Boxer") == 0){
		breedName = bn;
	}
	else{
		throw invalid_argument(bn+ " is not a valid breed name");
	}
}

Breed::~Breed(){

}

