#include <iostream>
#include <windows.h>

  int main() {
    float valorproduto;
    float valordesconto;
    float valorfinal;


    // perguntas

    std::cout << "digita o valor do produto: ";
    std::cin >> valorproduto;

    std::cout << "digita o valor do desconto: ";
    std::cin >> valordesconto;

// calculo
    valorfinal = valorproduto - (valorproduto * (valordesconto/100));


    // final
     std::cout << "\nvalor final decontado = " << valorfinal;

  }
