 #include <iostream>

 using namespace std;

 int main(){
    long long a, b = 0;
    cout <<  "Enter a number: "; cin >> a;
    while(a!= 0){
        if((a%10)%2 == 0){
            b += a % 10;
        }
        a /= 10;
        
    }
    cout << "The sum of all the even digits of the number is: " << b;
 }