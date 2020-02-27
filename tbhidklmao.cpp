#include <iostream>
#include <random>
#include <ctime>

int main(){
	int seed;
	std::srand(std::time(NULL));
	int age = 0;
	int deathAge = std::rand() % 50 + 70;
	while(age < deathAge){
		age++;
		std::cout << "you are " << age << " years old" << "\n";
	}
	std::cout << "\n" << "you are dead, congratulations";
	return 0;
}