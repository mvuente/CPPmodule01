#include "Pony.hpp"

Pony	ponyOnTheHeap(std::string rider)
{
	Pony		grey = Pony(rider);

	grey.ft_mission();
	return (grey);
}
Pony	*ponyOnTheStack(std::string rider)
{
	Pony*		brown = new Pony(rider);
	brown->ft_mission();
	return (brown);
}

int main()
{
	Pony		grey = ponyOnTheHeap("dwarf");
	Pony		*brown;

	brown = ponyOnTheStack("hobbit");
	//Pony::ft_mission();
	delete brown;
	return 0;
}
