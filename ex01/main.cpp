#include "Zombie.hpp"
#include <limits>

int main(void)
{
    Zombie *zombie;
    int     horde_size;
    int     i = 0;

    std::cout << "Horde size : ";
    std::cin >> horde_size;
    if (std::cin.fail() || horde_size <= 0)
    {
        std::cin.clear();
//        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return (1);
    }
    zombie = zombieHorde(horde_size, "JUAN");
    while (i < horde_size)
    {
        std::cout << i + 1 << " ";
        zombie[i].announce();
        i++;        
    }
	delete[] zombie;
    return (0);
}