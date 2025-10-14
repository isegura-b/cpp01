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
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    // Definir el tipo de puntero a función miembro
    typedef void (Harl::*HarlFunc)(void);
    
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    HarlFunc funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int n = sizeof(levels) / sizeof(levels[0]);

    for (int i = 0; i < n; ++i)
    {
        if (level == levels[i])
        {
            (this->*funcs[i])();
            return;
        }
    }

    std::cout << "Invalid level: " << level << std::endl
              << "DEBUG, INFO, WARNING, ERROR" << std::endl;
}