#include <iostream>

using namespace std;

int main() { 

    int tomb[7][3], ossz=0;

    for (int i = 0; i < 7 ; i++ ){
        for (int j = 0; j < 3 ; j++) {
            cout<<"Add meg a(z) "<<i+1<<". nap "<<j+1<<" . meresi adatat!"<<endl;
            cin>>tomb[i][j];
            ossz += tomb[i][j];
        }
    }
    cout<<"Az ossz  osszeg: "<<ossz<<endl; 
}