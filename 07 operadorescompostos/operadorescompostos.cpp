#include <iostream>
#include <windows.h>

int main(){

    float valor;

    std::cout << "digita o valor do produto: R$";
    std::cin >> valor;

    valor -= (valor*0.12);

    std::cout << "\nvalor do descontado: R$" <<valor;


}