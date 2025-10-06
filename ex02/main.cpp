#include <iostream>
#include <string>

int main() {
    // Variable string (string)
    std::string brain = "HI THIS IS BRAIN";

    // Puntero a la string (string *)
    std::string *stringPTR = &brain;

    // Referencia a la string (string &)
    std::string &stringREF = brain;

    // Imprimir direcciones de memoria
    std::cout << "Memory address of brain: " << &brain << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

    // Imprimir valores
    std::cout << "Value of brain: " << brain << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

    return (0);
}