#include <iostream>

using namespace std;

int main() { 
    int i = 0;
    int a[4];
    while(i<4) {
                cout<<"Add meg a tomb "<<i<<" erteket "<<endl;
                cin>>a[i];
                i++;
    }

    int osszeg = 0;  
    for (int i = 0; i < 4; i++) {
        osszeg = osszeg + a[i];
    }
       cout<<"tomb osszeg "<<osszeg<<endl;
}