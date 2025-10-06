#include "Zombie.hpp"

Zombie *newZombie(std::string name) 
{
    return new Zombie(name); //se crea en el heap
}

/* 
Zombie *newZombie(std::string name) 
{
    Zombie* z = new Zombie(name);
    return (z);
}

new es lo mismo que malloc, pero para objetos. Guarda la memoria en el heap,
y retorna un puntero a la memoria.
*/