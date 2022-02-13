#include <iostream>

using namespace std;

int main() { 
    int tomb[4],i=0;

    do {
      cout<<"Add meg a tomb "<<i<<" erteket "<<endl;
      cin>>tomb[i];
        i++;
    } while(i<4);

    int osszeg = 0;  
    for (int i = 0; i < 4; i++) {
        osszeg += tomb[i];
    }
       cout<<"tomb osszeg "<<osszeg<<endl;
}