#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() 
{
	// open input stream for the file
	ifstream file;

	// open the file stream for the required file
	file.open("testfile.txt");

	// ensure the file can be opened
	if(file.fail()) {
		cerr << "Error opening file" << endl;
		exit(1);
	}

	// string for the line input
	string line;

	//  while the file is not at the end of the lines
	while(!file.eof()) {

		// add the line from the file to the string
		file >> line;

		// string tokenizer for each element seperated by commas
		istringstream ss(line);
		string token;

		// split the line up by commas
		while(getline(ss, token, ',')) {
			cout << token << ", ";
		}
		cout << '\n';
	}

}