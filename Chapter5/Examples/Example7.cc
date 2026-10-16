#include <string> 
#include <iostream>

int main(){

	// Strings initalized with std::string
	std::string name = {};
	std::string name2 = { " Alex " }; 
	name2 = { "John"}; 

	// String output with std::cout
	std::cout << "Name shown is: " << name2; 

	//String input with std::cin
	std::cout << "\nWhat is your name: "; 
	std::cin >> name2;
	std::cout << name2;

	//std::getline() to input text
	std::string animal = {};
	std::cout << "\nEnter an animal: "; 
	std::cin >> animal; 
	std::getline(std::cin >> std::ws, animal);
	std::cout << animal; 

	return 0;
}
