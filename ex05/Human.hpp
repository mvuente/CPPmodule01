
#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Human
{
private:
	const Brain _Brains;

public:

	Human(void);
	std::string	identify(void);
	const Brain& getBrain(void);
	~Human(void);

};

#endif