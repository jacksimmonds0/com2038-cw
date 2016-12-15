#ifndef  DOG_H
#define  DOG_H
#include <stdio.h>
#include <string>

using namespace std;

class Dog {

	private:
		string name;
		string color;
		Dog* dad;
		Dog* mom;

	public:
		Dog(string name, string color);
		~Dog();

		virtual string getName() {
			return name;
		}

		virtual string getColor() {
			return color;
		}

		Dog * getDad() {
			return dad;
		}

		Dog * getMom() {
			return mom;
		}

		void setDad(Dog* d) {
			dad = d;
		}

		void setMom(Dog* m) {
			mom = m;
		}

};

#endif