#include <stdio.h>
#include <string>

using namespace std;

class FileReader {

	public:
		template<typename T> void printElement(T t, const int& width);
		void printHeaders(int total);
		void paternalTree();
		int totalDogs(string filename);
		void fileReader(string filename);
};