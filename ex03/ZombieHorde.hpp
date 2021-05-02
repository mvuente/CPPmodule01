
#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <cstdlib>

class ZombieHorde
{
private:
	int 			_N;
	Zombie			*_horde;

public:


	ZombieHorde(int N);
	void announce(void);
	~ZombieHorde(void);
};

#endif
