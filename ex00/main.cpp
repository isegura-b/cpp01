#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie1;
    zombie1 = newZombie("Juan");
    zombie1->announce();
    delete zombie1;

    randomChump("RandomJuan");

    return 0;
}