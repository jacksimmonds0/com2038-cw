#include <stdio.h>
#include <iostream>
#include "Breed.h"


int main(){

	Dog* dog1 = new Dog("janice", "brown",  NULL, NULL);
	Dog* dog2 = new Dog("janice2", "brown2", NULL, NULL);

	// std::cout << "name:  " + test.getName() << std::endl;
	// std::cout << "color:  " + test.getColor() << std::endl;
	// std::cout << "breed:  " + test.getBreedName() << std::endl;


	Breed child("Janice2.5", "red", "husky", dog1, dog2);

	std::cout << "name:  " + child.getName() << std::endl;
	std::cout << "dad:  " + child.getDad()->getName() << std::endl;

}