#include <iostream>

using namespace std;


int main() {

    int a, min, max;

    cout<<"Introduceti numarul 1:";
    cin>>a;

    min = a;
    max = a;

    for(int i = 0; i < 3; i++){
        cout<<"Introduceti numarul "<< i+2 <<":";
        cin>>a;
        if(a > max){
            max = a;
        }
        if(a < min){
            min = a;
        }
    }

    cout<<"minimul este: "<<min<<endl;
    cout<<"maximul este: "<<max<<endl;


    return 0;
}