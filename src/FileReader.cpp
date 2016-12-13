#include "FileReader.h"
#include "Breed.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

// method for printing the table in the correct format with consistent spacing
template<typename T> void FileReader::printElement(T t, const int& width)
{
	const char separator = ' ';
    cout << left << setw(width) << setfill(separator) << t;
}

// outputting the headers in the correct format as required 
void FileReader::printHeaders(int total) 
{
	cout << "There are " << total << " dog(s) in the inventory, which are:" << '\n' << '\n';
	cout << "Name     Breed    Colour   Dad      Mom" << '\n';
	cout << "-----------------------------------------" << '\n';
}

// method for the user to input a dogs name and output the paternal tree onto the cmd line
void FileReader::paternalTree()
{
	string inputName;
	cout << "Enter the dog's name to find its paternal tree: ";

	// get the user input from the command line for the dogs name
	getline(cin, inputName);

	cout << '\n';

	


}

// count the total number of dogs in the inventory
int FileReader::totalDogs(string filename)
{
	// input stream
	ifstream file;

	file.open(filename);

	if(file.fail()) {
		// if file fails to open output an error and exit
		cerr << "Error opening file" << endl;
		exit(1);
	}

	string line;
	int total = 0;
	string line2;

	while(!file.eof()) {
		file >> line2;
		// total the no of dogs in the file
		total++;
	}

	return total;
}

// reading the csv file for the inventory input
void FileReader::fileReader(string filename) 
{
	// open input stream for the file
	ifstream file;

	// open the file stream for the required file
	file.open(filename);

	// ensure the file can be opened
	if(file.fail()) {
		// if fail output and error and exit
		cerr << "Error opening file" << endl;
		exit(1);
	}

	// string for the line input
	string line;

	int total = totalDogs(filename);

	printHeaders(total);

	const int nameWidth = 9;

	// while the file is not at the end of the lines in the file
	while(!file.eof()) {

		// add the current line from the file to the string
		file >> line;

		// string tokenizer for each element seperated by commas
		istringstream ss(line);
		string token;
		int counter = 0;

		// split the line up by commas
		while(getline(ss, token, ',')) {

			// fields to build a breed object
			string breed;
			string name;
			string colour;
			string dadName;
			string momName;

			// depending on which token the word is in the line apply different
			// rules accordingly using a switch statement
			counter++;

			// if there is no token then have N/A in the table instead
			if(token == "") {
				token = "N/A";
			}
			switch(counter) {
				case 1:
					// breed
					breed = token;
					printElement(token, nameWidth);
					break;

				case 2:
					// name
					name = token;
					printElement(token, nameWidth);
					break;

				case 3: 	
					// colour
					colour = token;
					printElement(token, nameWidth);
					break;

				case 4:
					// dads name
					dadName = token;
					printElement(token, nameWidth);
					break;

				case 5:
					// moms name
					momName = token;
					printElement(token, nameWidth);
					break;

				default:
					cout << "error" << endl;
					break;
			}

			// create a breed object based on the tokens in the line
			Breed dog(breed, name, colour);

			// set the dad/mom pointers to the correct object

		}
		// at the end of the line add N/A if last token is null
		if(counter == 4) {
			printElement("N/A", nameWidth);
		}
		cout << '\n';
	}
	cout << '\n';

	paternalTree();
}
