#include <iostream>

using namespace std;

int main(){
    int a, b = 0;
    cout << ": "; cin>>a;

    while(a!= 0){
        b += a%10;
        if (a > 10) b *= 10;  
        a /= 10;
    }
    cout << b;
}