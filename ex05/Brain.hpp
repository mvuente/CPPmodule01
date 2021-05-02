
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <sstream>
#include <string>

class Brain
{
private:
	std::string _semisphere;

public:

	Brain(void);
	std::string	identify(void) const;
	~Brain(void);

};

#endif