#include <iostream>

using namespace std;


int main() {
    int a,b;

    cout<<"Introduceti cele doua numere:";
    cin>>a>>b;

    if(a%b == 0 || b%a == 0) {
        cout<<"Numerele sunt divizibile intre ele \n";
    }
    else {
        cout<<"Numerele NU sunt divizibile intre ele \n";
    }

    return 0;
}