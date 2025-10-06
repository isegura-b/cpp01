#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>//include string
#include <iostream>
# include <new>//los guardados de memoria

class Zombie{
    private:
        std::string name;

    public:
        Zombie(void);               //construye
        Zombie(std::string name);   //construye con nombre
        ~Zombie(void);

        void announce(void);
        void setName(std::string name);    //le pone nombre ya construiudo

};

Zombie *zombieHorde(int N, std::string name);

#endif