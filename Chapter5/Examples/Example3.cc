#include <iostream> 

int main(){

	int x = {0xF}; // 0x before the number means this is a hexadecimal
	int y = {012}; // 0 before the number means this is an octal

	std::cout << "Hexadecimal shown here: " << x << std::endl;
	std::cout << "\n Octal shown here: " << y << std::endl; 

	return 0; 
}
