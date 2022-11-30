// palindroma.cpp :
//Betsabe Salazar

#include <iostream>
#include <string>


int polidroma(int polidromo, std::string T1)
{
    int a = 0;
    for (int i = T1.length() - 1; i >= 0; i--)
    {
        if (T1[i] == T1[a])
        {
            polidromo++;
        }
        a++;
    }
    return polidromo;
}

int main()
{
    std::string T1;
    int a1 = 0;

    std::cout << "Pon una palabra bro: " << std::endl;
    std::getline(std::cin, T1);
    a1 = polidroma(a1, T1);
    if (T1.length() == a1)
    {
        std::cout << "La palabra si es palindroma" << std::endl;
    }
    else
    {
        std::cout << "La palabra no es palindroma" << std::endl;
    }
    std::cout << std::endl << std::endl;
}