#include "Human.hpp"

Human::Human(void)
{
	std::cout << "Hi, I'm Bob, and I've got some kind of trouble with my brains" << std::endl;
	return ;
}

std::string	Human::identify(void)
{
	return (this->_Brains.identify());
}

const Brain		&Human::getBrain(void)
{
	return(this->_Brains);
}

Human::~Human(void)
{
	std::cout << "I'm died" << std::endl;
	return ;
}

