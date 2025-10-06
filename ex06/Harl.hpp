#ifndef Harl_HPP
# define Harl_HPP

#include <iostream>
#include <string>
#include <fstream>

class Harl
{
private:
	void debug();
	void info();
	void warning();
	void error();
public:
	Harl();
	~Harl();

	void complain(std::string level);
};

#endif