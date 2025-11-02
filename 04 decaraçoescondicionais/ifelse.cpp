#include <iostream>
#include <windows.h>

int main(){

    float nota1;
    float nota2;
    float notatrabalho;
    float media;

    std::cout << "digite a nota 1: ";
    std:: cin >> nota1;

    std::cout << "digite a nota 2: ";
    std:: cin >> nota2;
        
    std::cout << "digite a nota do trabalho: ";
    std:: cin >> notatrabalho;

    // calculo

    media = (nota1*0.3) + (nota2*0.5) + (notatrabalho*0.2);

    // display

    std::cout << "\nMedia: " <<media;
    if( media < 7){
        std::cout << "\nReprovado";
    }else{
        std::cout << "\nAprovado";
    }

}