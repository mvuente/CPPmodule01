#include "Brain.hpp"

Brain::Brain(void)
{
	this->_semisphere = "left";
	std::cout << "Hi, I'm " << this->_semisphere << " semisphere and I'm alone after lobotomy. It's boring now" << std::endl;
	return ;
}

std::string	Brain::identify(void) const
{
	std::ostringstream oStream;
	oStream << (this);
	return (oStream.str());

}

Brain::~Brain(void)
{
	std::cout << "I'm sour" << std::endl;
	return ;
}

