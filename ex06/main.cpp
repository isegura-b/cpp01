#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Harl H;
		H.complain(av[1]);
	}
	else
		std::cout << "Invalid arguments" << std::endl;
	return (0);
}