#include <iostream>

using namespace std;

int main() { 

    int tomb[2][2][2][2][2], ossz=0;

    for (int i = 0; i < 2 ; i++ ){
        for (int j = 0; j < 2 ; j++) {
            for (int k = 0; k < 2 ; k++) {
                for (int l = 0; l < 2 ; l++) {
                    for (int m = 0; m < 2 ; m++) {
                        cout<<"Add meg a(z) meresi adatat!"<<endl;
                        cin>>tomb[i][j][k][l][m]; 
                        ossz += tomb[i][j][k][l][m];
                    }
                }
            }
        }
    }
    cout<<"Az ossz  osszeg: "<<ossz<<endl; 
}