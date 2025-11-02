#include <iostream>
#include <windows.h>

int main(){

    int calorias;

    std::cout << "digite a quntidade de calorias consumidas por dia: ";
    std::cin >> calorias;

    if(calorias>=1200 && calorias<=1900){
        std::cout << "dentro da faixa";
    
    }else{
        std::cout << "fora da faixa";
    }

}