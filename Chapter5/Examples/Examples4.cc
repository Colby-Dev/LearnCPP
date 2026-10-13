#include <iostream> 

int main(){

	std::cout << "Testing " << std::endl;

	for(int i = 0; i < 11; i++) {
		int x = 3 + 4; // The Constant folding will replace this if ran multiple times to just 7 
		std::cout << x << std::endl; 
	}; 

	return 0;
	
}
