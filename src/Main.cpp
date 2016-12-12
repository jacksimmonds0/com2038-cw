#include <stdio.h>
#include <iostream>
#include "Breed.h"

int main(){

	Breed test("janice", "brown", "husky");

	std::cout << "HELLO " + test.getName() << std::endl;
}