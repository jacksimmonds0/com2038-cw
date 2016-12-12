#include <stdio.h>
#include <string>


class Dog{


	private:
		std::string name;
		std::string color;
		Dog* dad;
		Dog* mom;

	public:
		Dog(std::string name, std::string color);
		~Dog();

		virtual std::string getName(){
			return name;
		}

		virtual std::string getColor(){
			return color;
		}

		Dog * getDad(){
			return dad;
		}

		Dog * getMom(){
			return mom;
		}

};