#include <stdio.h>
#include <string>
#include "Dog.h"

class Breed: public Dog{

	private:
		std::string breedName;

	public:
		Breed(std::string name = "default", std::string color = "default", std::string bn = "default", Dog * dd = NULL, Dog * md = NULL);
		~Breed();

		std::string getBreedName(){
			return breedName;
		}
};