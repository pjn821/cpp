#include <iostream>
#include <windows.h>

int main(){
    int idade;
    
    std::cout << "digite a sua idade: ";
    std::cin >> idade;

    if(idade >= 18){
        std::cout << "maior de idade";

    }else{
        std::cout << "menor de idade";
    }
    if((idade%2)==0){
         std::cout << "\nnumero par";
    }else{
         std::cout << "\nnumero impar";
    }
}

