#include <stdio.h>


class Dog{


	private:
		std::string name;
		std::string color;
		Dog* dad;
		Dog* mom;

	public:
		Dog(std::string name, std::string color, Dog* dad, Dog* mom);
		~Dog();

		std::string getName(){
			return name;
		}

		std::string getColor(){
			return color;
		}

		Dog * getDad(){
			return dad;
		}

		Dog * getMom(){
			return mom;
		}

}