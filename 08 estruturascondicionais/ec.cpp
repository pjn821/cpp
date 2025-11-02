#include <iostream>
#include <windows.h>

int main(){

    float impostomensal;
    float impostoanual;
    float aliquoa;
    float deducao;
    float salario;

    std::cout << "digite o seu salario bruto mensal: R$";
    std::cin >> salario;

    if(salario > 4664.68){
        aliquoa = 27.5;
        deducao = 869.36;
    }else if(salario <=4664.68 && salario>=3751.06){
        aliquoa= 22.5;
        deducao= 636.13;
    }else if(salario <=3751.06 &&
    salario >=2826.66){
        aliquoa= 15;
        deducao= 354.80;
    }else if(salario <=2826.66 && salario>= 1903.99){
        aliquoa=7.5;
        deducao=142.80;
    }else{
        aliquoa=0;
        deducao=0;
    }
     impostomensal= salario*(aliquoa/100)- deducao;
     impostoanual= impostomensal*12;

     std::cout<< "\nsalarioa: R$" <<salario;
     std::cout<< "\naliquata: R$" <<aliquoa<<"%";
     std::cout<< "\nimposto mensal: R$" <<impostomensal;
     std::cout<< "\nimposto anual: R$" <<impostoanual;


}