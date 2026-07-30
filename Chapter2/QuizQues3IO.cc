#include <iostream>
#include "io3.h"
using namespace std;

int readNumber(){

	int x;
	std::cout << "Enter a number: " << endl;
	std::cin >> x;
	return x;
}

void writeAnswer(int z){
	std::cout << "The answer is: " << z << endl;
}
