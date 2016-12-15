#ifndef  BREED_H
#define  BREED_H
#include <stdio.h>
#include <string>
#include "Dog.h"

using namespace std;

class Breed: public Dog {

	private:
		string breedName;

	public:
		Breed(string name = "default", string color = "default", string bn = "default");
		
		~Breed();

		string getBreedName() {
			return breedName;
		}
};

#endif