#include <iostream> //str::cerr para errores
#include <fstream>
#include <string>

std::string replaceS1(std::string text, const std::string &s1, const std::string &s2) 
{
    if (s1.empty())
        return (text); // evitar bucle infinito

    size_t pos = 0;
    while ((pos = text.find(s1, pos)) != std::string::npos) //npos = NoPosition que en size_t = -1 (si no se encuentra en pos de s1 = -1)
    {
        text.erase(pos, s1.length());    // borramos s1
        text.insert(pos, s2);            // insertamos s2
        pos += s2.length();              // avanzamos para no reemplazar infinitamente
    }
    return (text);
}

int main(int ac, char **av)
{
    if (ac != 4) 
    {
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    else if (!av[1][0] || !av[2][0])
	{
		std::cout << "Invalid empty arg" << std::endl;
		return (1);
	}

    std::string file = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    std::ifstream inFile(file.c_str()); //std::ifstream = input file stream → flujo de entrada desde un archivo (para leer).
    if (!inFile)                        //file.c_str() = puntero tipo const char* al contenido de file
    {                                   //Necesario en C++98 porque ifstream y ofstream no sabían trabajar con std::string directamente.
        std::cerr << "Error: cannot open file " << file << std::endl;
        return 1;
    }

    std::ofstream outFile((file + ".replace").c_str()); //std::ofstream = output file stream → flujo de salida hacia un archivo (para escribir).
    if (!outFile) 
    {
        std::cerr << "Error: cannot create file " << file + ".replace" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inFile, line)) 
    {
        outFile << replaceS1(line, s1, s2);
        if (!inFile.eof())
            outFile << "\n"; // mantener saltos de línea originales
    }

    inFile.close();
    outFile.close();

    return (0);
}