
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent(void)
{
	return;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
	return ;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie	*one;

	one = new Zombie();
	one->name = name;
	one->type = this->_type;
	one->ft_announce();
	return (one);
}

ZombieEvent::~ZombieEvent(void)
{
	return;
}

