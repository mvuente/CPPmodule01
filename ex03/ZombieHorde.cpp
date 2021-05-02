#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _N(N)
{
	int 	count = 0;
	std::string		nameset[10] = { "abyrvalg", "tahorg", "bashorg", "nosorog", "kosorog",
									"krivoy_rog", "sinyuha", "kukuha", "mokruha", "borcuha"};
	std::string 	typeset[2] = { "skinless", "topless"};

	if (N < 0)
		exit(1);
	srand(time(0));
	Zombie	*horde = new Zombie[N];
	this->_horde = horde;
	while (count < N)
	{
		this->_horde[count].name = nameset[rand() % 10];
		this->_horde[count].type = typeset[rand() % 2];
		count++;
	}
	return ;
}

void ZombieHorde::announce(void)
{
	int count = 0;

	while (count < _N)
	{
		_horde[count].ft_announce();
		count++;
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] _horde;
	return ;
}

