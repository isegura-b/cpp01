#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>//include string
#include <iostream>
# include <new>//los guardados de memoria

class Zombie{
    private:
        std::string name;

    public:
        Zombie(std::string name); //No hace falta el Zombie(), el enunciado lo dice
        ~Zombie();

        void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);
#endif