#include <iostream>
#include <string>

int main()
{
	std::string		STR = "HI THIS IS BRAIN";
	std::string* 	STRPTR = &STR;
	std::string&	STRREF = STR;

	std::cout << "Pointer is printing: " << *STRPTR << std::endl;
	std::cout << "Reference is printing: " << STRREF << std::endl;
	return 0;
}
