#include <stdio.h>
#include <Dog.h>

class Breed: public Dog{

	private:
		std::string breedName;

	public:
		Breed(std::string breedName);
		using Dog::Dog;

		std::string getBreedName(){
			return breedName;
		}
}