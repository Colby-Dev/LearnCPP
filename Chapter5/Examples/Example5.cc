#include <iostream> 
using namespace std;
int getNumber(){
	std::cout << "Enter a name: ";
	int y;
	std::cin >> y;

	return y;
}

int five(){
	return 5;
}

int main(){

	// These are all Const expressions
	5;
	1.2;
	"Hello!";

	5 + 6; 
	1.2 * 3.4; 

	getNumber(); // Runtime expression
	five(); // Runtime expression

	const int e = {}; // Constant expression


	return 0; 

} 

