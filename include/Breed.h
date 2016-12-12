#include <stdio.h>
#include <string>
#include "Dog.h"

class Breed: public Dog{

	private:
		std::string breedName;

	public:
		Breed(std::string name, std::string color, std::string bn);
		~Breed();

		std::string getBreedName(){
			return breedName;
		}
};