
#ifndef FOPENER_HPP
#define FOPENER_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <locale>

class Fopener
{
private:
	std::string	_fname;
	std::string	tmpstr;
	std::string newstr;

public:
	Fopener(void);
	Fopener(std::string fname);
	~Fopener(void);
	void 		reaDer(void);
	void 		rePlacer(std::string s1, std::string s2);
};

#endif
