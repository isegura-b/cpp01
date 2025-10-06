#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string n):
    weapon(NULL)
{ 
    this->name = n;
    std::cout << this->name << " is generated" << std::endl;
}
HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& w) 
{
    this->weapon = &w; // asignamos la dirección del arma
    std::cout << this->name << " has taken " << weapon->getType() << std::endl;
}

void HumanB::attack()
{
    if (!weapon)
        std::cout << name << " has no weapon to attack!" << std::endl;
    else
        std::cout << name << " attacks with " << weapon->getType() << std::endl;
}
