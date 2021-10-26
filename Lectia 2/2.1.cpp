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
    int nr;

    std::cout<<"Numarul este:";

    std::cin>>nr;

    if(isPrime(nr)){
        std::cout<<"Numarul este prim \n";
    }
    else {
        std::cout<<"Numarul NU este prim \n";
    }


    return 0;
}