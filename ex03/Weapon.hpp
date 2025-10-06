#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon 
{
private:
    std::string type;

public:
    Weapon(std::string type);
    ~Weapon();

    std::string getType();              //getter
    void setType(std::string type);     //setter
};

#endif