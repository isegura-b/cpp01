#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Generating Harl" <<std::endl;
}

Harl::~Harl()
{
	std::cout << "Deleting Harl" <<std::endl;
}

void	Harl::debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) 
{
    int i = 0;
    int j = -1;

    std::string message[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    while (i < 4)
    {
        if (message[i] == level)
            j = i;
        i++;
    }
    
    switch (j) 
    {
        case 0:
            debug();
            // fall through
        case 1:
            info();
            // fall through
        case 2:
            warning();
            // fall through
        case 3:
            error();
            break;
        default:
        std::cout << "[ Probably complaining about insignificant problems ]\n" << "Invalid level: " << level << std::endl << "DEBUG, INFO, WARNING, ERROR" << std::endl;
    }
}