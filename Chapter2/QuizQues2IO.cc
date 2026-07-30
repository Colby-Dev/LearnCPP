#include <iostream>
using namespace std; 

int readNumber(){
	int x;
	std::cout << "Enter an integer: " << endl;
	std::cin >> x;
	return x;
}

void writeNumber(int y){
	
	std::cout << "The answer is: " << y <<endl;
}
