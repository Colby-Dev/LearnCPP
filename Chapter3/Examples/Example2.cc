#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h> 
#include <iostream> 

int getUserInput()
{
	PLOGD << "getUserInput() Called "; 

	std::cout << "Enter a number: ";
	int x = {};
	std::cin >> x;
	return x; 
}

int main()
{
	plogd::init(plog::debug, "Logfile.txt");

	PLOGD << "main() called";
	
	int x = {getuserInput()}
	std::cout << "You entered: " << x << std::endl;
	return 0;
}
