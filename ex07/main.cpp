#include <iostream>
#include <string>
#include "Fopener.hpp"

int main(int argc, char **argv)
{
	Fopener	fop;

	if (argc != 4)
	{
		std::cout << "Error: wrong arguments" << std::endl;
		return (1);
	}
	fop = Fopener(argv[1]);
	fop.reaDer();
	fop.rePlacer(argv[2], argv[3]);

	return (0);
}

