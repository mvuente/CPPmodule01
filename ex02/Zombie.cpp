#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

void Zombie::ft_announce(void)
{
	std::cout << this->name << " " << this->type << " has came... and smells... ha-ha-ha..." << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout  << "Pffff!!! Dirty " << this->name << "'s head was finally torn off" << std::endl;
	return ;
}

