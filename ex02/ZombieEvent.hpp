
#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string _type;

public:
	ZombieEvent();
	void	setZombieType(std::string type);
	Zombie*	newZombie(std::string name);
	~ZombieEvent(void);

};

#endif
