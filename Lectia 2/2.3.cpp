#include <iostream>


void sumAndProdOfDiv(int nr, int &sum, int &prod) {
    for(int i = 1; i <= nr; i++){
        if(nr % i == 0){
            sum += i;
            prod *= i;
        }
    }
}


int main() {
    int nr, sum=0, prod=1;

    std::cout<<"Numarul este: ";

    std::cin>>nr;

    sumAndProdOfDiv(nr, sum, prod);

    std::cout<<"Suma divizorilor este: "<<sum<<std::endl;
    std::cout<<"Produsul divizorilor este: "<<prod<<std::endl;

    return 0;
}