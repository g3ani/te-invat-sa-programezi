#include <iostream>


void logVector(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}

void sumaSiProdus(int arr[], int n, int &suma, int &produs) {
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            suma += arr[i];
        }
        else {
            produs *= arr[i];
        }
    }
}


int main() {
    int v[1000], n, suma = 0, produs = 1;

    std::cout<<"Introduceti marimea vectorului: ";
    std::cin>>n;

    for(int i = 0; i < n; i++) {
        std::cout<<"Introduceti elementul numarul "<<i<<" din vector: ";
        std::cin>>v[i];
    }

    sumaSiProdus(v, n, suma, produs);

    std::cout<<"Suma numerelor pare este: "<<suma<<std::endl;
    std::cout<<"Produsul numerelor impare este: "<<produs<<std::endl;


    logVector(v,n);


    return 0;
}