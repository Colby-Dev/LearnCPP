#include <iostream> 

using namespace std; 

int read_numb(){

	std::cout << "Enter an integer to add: " << endl;
	int x; 
	std::cin >> x;
	return x;
}

void write_numb(int x){

	std::cout << "The answer is: "<< x << "\n";
}

int main(){

	int x = {read_numb()};
	int y = {read_numb()};
	write_numb(x + y);
	return 0; 

}
