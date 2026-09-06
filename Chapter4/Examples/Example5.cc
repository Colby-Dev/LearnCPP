#include <iostream> 
using namespace std; 

int main(){

	int x;
	std::cout << "Enter an integer: ";
	std::cin >> x; 

	if (x == 0){

		std::cout << "The integer entered is 0\n"<< std::endl;
	}
	else {
		std::cout << "The integer is not 0\n"<< std::endl;
	}

	return 0;

}
