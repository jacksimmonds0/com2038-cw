#include <stdio.h>
#include <iostream>
#include "Breed.h"
#include "FileReader.h"

using namespace std;

int main() {

	FileReader* read = new FileReader();
	try{
		read -> fileReader("bin/inventory.csv");
	}
	catch(const invalid_argument& e){
		cout << e.what() << endl;
	}
}