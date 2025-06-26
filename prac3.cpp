#include <iostream>
using namespace std;

int index_finder(int array[], int size, int element);

int main(){

    int number[] = {1, 2, 3, 4, 5};
    int index;
    int size = sizeof(number) / sizeof(int);
    int element;

    cout << "Enter the element to be searched: "; cin >> element;

    index = index_finder(number, size, element);

    if(index != -1){
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }
} 

int index_finder(int array[], int size, int element){
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}