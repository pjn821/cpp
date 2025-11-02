#include <iostream>
#include <windows.h>

int main(){

    int numero;

    std::cout << "\ndigite o numero inteiro positivo: ";
    std::cin >> numero;

    while (numero < 0)
    {
        std::cout << "\no numero digitado é negativo";
        std::cout << "\ndigite o numero inteiro positivo: ";
        std::cin >> numero;
    }
    
    std::cout << "numero digitado: "<< numero;
}