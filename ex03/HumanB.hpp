#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB 
{
private:
    std::string name;
    Weapon *weapon; // puntero → puede ser nullptr

public:
    HumanB(std::string name);
    ~HumanB();

    void setWeapon(Weapon& weapon);
    void attack();
};

#endif