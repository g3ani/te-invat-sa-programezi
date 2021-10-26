#include <iostream>

using namespace std;

bool isAritmProgression(int a, int b, int c) {
    return b-a == c-b;
}

bool isGeometricProgression(int a, int b, int c) {
    return b/a == c/b;
}


int main() {
    int a,b,c;

    cout<<"Introduceti cele 3 numere:";

    cin>>a>>b>>c;

    if(isAritmProgression(a,b,c)) {
        cout<<"Este progresie aritmetica! \n";
    }

    if(isGeometricProgression(a,b,c)) {
        cout<<"Este progresie geometrica! \n";
    }




    return 0;
}