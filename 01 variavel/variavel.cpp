#include <iostream>
#include <windows.h>

  int main() {

  SetConsoleOutputCP(65001);

  char name[50];
  int idade;       
  char sexo;
  char profissao[50];
  double salario;

  std::cout << "Digite os seus dados.";
  std::cout <<"Name: ";
  std::cin >>name; 
  std::cout <<"idade: ";
  std::cin >> idade; 

  std::cout <<"sexo: ";
  std::cin >> sexo; 

  std::cout <<"Porfissao: ";
  std::cin >> profissao; 

  std::cout <<"salario: ";
  std::cin >> salario; 

  // saída/display
  std::cout << "\nOlá, " << name << " . Segue abaixo os teus dados";
  std::cout << "\nIdade: " << idade << " anos";
  std::cout << "\nSexo: " << sexo;
  std::cout << "\nProfissão: " << profissao;
  std::cout << "\nSalário: " << salario << "€";
}