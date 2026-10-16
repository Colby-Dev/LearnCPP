#include <iostream>> 

int five() { 
	return 5;
}

int main(){ 

	constexpr double gravity = { 9.8 }; // const variable
	constexpr int sum = { 4 + 5 }; // const variable
	constexpr int something = { sum }; // sum is a const expression
					   
	std::cout << " Enter you age: "; 
	int age; 
	std::cin >> age; 

	constexpr int myAge = {age}; // <-- compile error this is not a const 
	constexpr int f = { five() }; // <-- compile error five() not a constexpr
	
	return 0; 
}
