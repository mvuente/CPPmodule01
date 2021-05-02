#include "Fopener.hpp"

Fopener::Fopener(void)
{
	return ;
}

Fopener::Fopener(std::string fname) : _fname(fname)
{
	return ;
}

void Fopener::reaDer(void)
{
	std::ifstream	ifs(this->_fname);
	if (!ifs)
	{
		std::cerr << "Sorry, but the file you've offered couldn't be opened for reading!" << std::endl;
		exit(1);
	}
	while (ifs)
	{
		if (this->newstr.length())
			this->newstr += "\n";
		std::getline(ifs, this->tmpstr);
		this->newstr += this->tmpstr;
	}
	ifs.close();
	return ;
}

void Fopener::rePlacer(std::string s1, std::string s2)
{
	size_t 			start_pos = 0;
	std::locale		loc;
	size_t			i = -1;
	std::string 	tmpfname = this->_fname;

	if (!s1.length())
	{
		std::cerr << "Sorry, but I don't know, what substring should be replaced!" << std::endl;
		exit(1);
	}
	while((start_pos = this->newstr.find(s1, start_pos)) != std::string::npos)
	{
		this->newstr.replace(start_pos, s1.length(), s2);
		start_pos += s2.length();
	}
	while (++i < tmpfname.length())
		tmpfname[i] = toupper(tmpfname[i], loc);

	tmpfname += ".replace";
	std::ofstream 	outf(tmpfname);
	if (!outf)
	{
		std::cerr << "Sorry, but the file you've offered couldn't be opened for writing!" << std::endl;
		exit(1);
	}
	outf << this->newstr;
	outf.close();
	return ;
	}

Fopener::~Fopener(void)
{
	return ;
}