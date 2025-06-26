#include <iostream>

using namespace std;


int main(){
    int a;
    cout <<": "; cin >>a;
    for(int i = 1; i <= a; i++){
        for(int j=1;j<=a;j++){
            if(i>1 && i<=a-1){
                cout<<i << " "<<string((a-2)*2, ' ')<<a-i+1;
                break;
            }
            else if(i==a){
                for (int k = a; k>=1; k--) cout<< k<< " ";
                break;
            }
            else cout<<j <<" "; 
        }
        cout << endl;
    }
}   