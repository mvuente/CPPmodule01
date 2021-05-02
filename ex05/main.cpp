#include "Brain.hpp"
#include "Human.hpp"

int main()
{
	Human	Bob;

	std::cout << Bob.identify() << std::endl;
	std::cout << Bob.getBrain().identify() << std::endl;
	return 0;
}

