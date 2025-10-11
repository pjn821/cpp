#include <iostream>
int main() {
    // declarar variáveis
    float nota1, nota2, nota3, nota4, media;
    
    // obtenção das notas
    std::cout << "Digite a nota 01: ";
    std::cin >> nota1;

    std::cout << "Digite a nota 02: ";
    std::cin >> nota2;
    
    std::cout << "Digite a nota 03: ";
    std::cin >> nota3;

    std::cout << "Digite a nota 04: ";
    std::cin >> nota4;

    // cálculo da média
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    // mostrar resultado
    std::cout << "\nMedia: " << media ;


}
