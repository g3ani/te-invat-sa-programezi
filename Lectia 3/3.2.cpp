#include <iostream>


void logVector(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}

void bubbleSort(int *arr, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

bool isAritmProgression(int *arr, int n) {
    if(n < 2){
        return false;
    }

    int ratio = arr[1] - arr[0];

    for(int i = 2; i < n; i++){
        if(ratio != arr[i] - arr[i-1]){
            return false;
        }
    }

    return true;
}

int main() {
    int v[1000], n;

    std::cout<<"Introduceti marimea vectorului: ";
    std::cin>>n;

    for(int i = 0; i < n; i++) {
        std::cout<<"Introduceti elementul numarul "<<i<<" din vector: ";
        std::cin>>v[i];
    }

    bubbleSort(v, n);

    logVector(v,n);

    
    if(isAritmProgression(v, n)){
        std::cout<<"Numerele sortate din vector sunt in progresie aritmetica!"<<std::endl;
    }


    return 0;
}