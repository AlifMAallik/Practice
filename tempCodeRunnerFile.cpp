#include <iostream>

using namespace std;

int main(){
    int *a = nullptr;

    // Assign an address or allocate memory to 'a'
    int value = 190;
    a = &value;

    cout  << *a;
}