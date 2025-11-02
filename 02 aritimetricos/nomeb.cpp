#include <iostream>
int main() {
    // basic data types
    // char - for single characters
    // char name[10] - for string-like things 10 characters max
    char name[2];
    // what was the issue you were having here?
    std::cout <<"qual o teu nome?: ";
    std::cin >> name;

    std::cout << "\nbom dia," <<name;


    // why is only showing the first letter
    // > qual o teu nome? artur
    // > bom dia,a



}
