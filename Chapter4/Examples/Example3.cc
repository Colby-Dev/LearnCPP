#include <iostream> 
#include <cstdint> 

int main() { 

	
	std::cout << "Least 8: " << sizeof(std::int_least8_t) * 8 << '\n';
	std::cout << "Fast 8: " << sizeof(std::int_fast8_t) * 8;
	return 0;
}
