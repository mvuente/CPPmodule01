
#ifndef PONY_HPP
#define PONY_HPP
#include <iostream>
#include <string>

class Pony
{
	private:
		std::string _rider;

	public:
		Pony(std::string rider);
		void ft_mission(void);
		~Pony(void);

};

#endif
