#include <iostream>
#include<windows.h>

int main(){
    int n;
    float media=0;

    std::cout<< "digite a quantidade de notas: ";
    std::cin>> n;

    for (int i = 0; i < n; i++)
    {
        std::cout<< "digit a nota"<< i+1<<": ";
        float notas;
        std::cin>> notas;
        media += notas;
        }

    media /= n;

    std::cout<< "\nmedia: "<<media;



    
}