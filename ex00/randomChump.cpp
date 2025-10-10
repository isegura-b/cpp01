#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie z(name); //se crea en el stack
    z.announce(); //se llama al metodo announce
    //se destruye el zombie
}