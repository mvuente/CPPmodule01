
#include "Pony.hpp"

Pony::Pony(std::string rider)
{
	this->_rider = rider;
	std::cout << "Pony for " << this->_rider << " is bought" << std::endl;
	return ;
}

void Pony::ft_mission(void)
{
	std::cout << "Pony carries " << this->_rider << " to Smaug's crowd" << std::endl;
	return ;
}

Pony::~Pony(void)
{
	std::cout  << this->_rider << "'s Pony"  << " has been sold out" << std::endl;
	return ;
}
