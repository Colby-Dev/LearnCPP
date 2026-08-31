#include <iomanip> 
#include <iostream> 
#include <climits>

using namespace std;

int main(){


	std::cout << "A byte is " << CHAR_BIT << " bits\n\n";


	std::cout << "A bool is: " << std::setw(8) << " 1 byte\n\n";
	std::cout << "A char is: " << std::setw(8) << " 1 byte\n\n";
	std::cout << "A short is: " << std::setw(8) << " 2 byte\n\n";
	std::cout << "A int is: " << std::setw(8) << " 2 byte\n\n";
	std::cout << "A long is: " << std::setw(8) << " 4 byte\n\n";
	std::cout << "A long long is: " << std::setw(8) << " 8 byte\n\n";
	std::cout << "A float is: " << std::setw(8) << " 4 byte\n\n";
	std::cout << "A double is: " << std::setw(8) << " 8 byte\n\n";
	std::cout << "A pointer or null_pointer is: " << std::setw(8) << " 4 byte\n\n";

	return 0;
}

