#include <iostream>
#include <limits> 

int main(){

	std::cout << "Float: " << std::numeric_limits<float>::is_iec559 << '\n';
	std::cout << "Double: " << std::numeric_limits<double>::is_iec559 << '\n';
	std::cout << "Long Double: " << std::numeric_limits<long double>::is_iec559 << '\n';

	return 0;

}
