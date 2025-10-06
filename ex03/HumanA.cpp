#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w):
    weapon(w)                   //no se puede inicializat normal, tienes que hacer en lista.
{
    this->name = name;
    std::cout << this->name << " is generated with " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA() {}

void HumanA::attack()
{
    std::cout << this->name << " attacks with " << this->weapon.getType() << std::endl;
}