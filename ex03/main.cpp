#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() 
{
        Weapon club("crude spiked club");
        
        HumanB jim("Jim");
        HumanA bob("Bob", club);

        bob.attack();
        jim.attack();
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        bob.attack();
        jim.attack();

    return (0);
}