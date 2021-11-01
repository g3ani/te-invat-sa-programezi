#include <iostream>

void functieConcreta(int *asta) {
    *asta = 2;
    std::cout<<"Adresa lui asta este: "<< asta <<"si valoarea acestuia este: "<< *asta <<std::endl;
}


int main() {
    int *dinamic, _static;

    dinamic = new int();
    _static = 0;
    *dinamic = 10;


    functieConcreta(&_static);

    

    std::cout<<"Adresa lui _static este: "<< &_static <<"si valoarea acestuia este: "<< _static <<std::endl;
    std::cout<<"Adresa lui dinamic este: "<< dinamic <<"si valoarea acestuia este: "<< *dinamic <<std::endl;

    return 0;
}