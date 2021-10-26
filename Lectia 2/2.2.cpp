#include <iostream>


bool isPrime(int nr) {
    if(nr < 2){
        return false;
    }

    for(int i = 2; i < nr; i++){
        if(nr % i == 0){
            return false;
        }
    }
    return true;
}


int main() {
    int n, nr, sum = 0;

    std::cout<<"Introduceti numarul numerelor prime: ";
    std::cin>>n;

    for(int i=0; i < n; i++) {
        std::cout<<"Numarul "<<i+1<<": ";
        std::cin>>nr;

        if(isPrime(nr)){
            sum += nr;
        }
    }

    std::cout<<"Suma numerelor prime este: "<<sum<<std::endl;


    return 0;
}