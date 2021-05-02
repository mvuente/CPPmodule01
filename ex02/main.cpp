#include "ZombieEvent.hpp"

Zombie	randomChump(std::string nameset[10], std::string typeset[2])
{
	srand(time(0));
	Zombie	one = Zombie();
	Zombie	two = Zombie();
	one.name = nameset[rand() % 10];
	one.type = typeset[rand() % 2];
	one.ft_announce();
	two.name = nameset[rand() % 10];
	two.type = typeset[rand() % 2];
	two.ft_announce();
	return (one);
}

int main()
{
	static std::string 	nameset[10] = { "komsorg", "tahorg", "bashorg", "nosorog", "kosorog", "krivoy_rog", "sinyuha",
								   "kukuha", "mokruha", "borcuha"};
	static std::string 	typeset[2] = { "skinless", "topless"};
	Zombie			bro = Zombie();
	ZombieEvent		event;

	bro.ft_announce();
	event.setZombieType("stinky");
	Zombie			*HEAPster = event.newZombie("abyrvalg");
	Zombie			random = randomChump(nameset, typeset);
	delete HEAPster;
	return 0;
}
