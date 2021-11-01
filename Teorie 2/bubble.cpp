#include <iostream>

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

int main() {
    int v[] = {5,1,4,2,8};
    int n = 5;

    bubbleSort(v, n);


    for (int i = 0; i < n; i++) {
        std::cout<<v[i]<<" ";
    }
    return 0;
}