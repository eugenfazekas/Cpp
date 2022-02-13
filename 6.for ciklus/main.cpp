#include <iostream>

using namespace std;

int main() { 

    int a[5];
    for(int i = 0; i < 5; i++ ) {
        cout<<"Add meg a tomb "<<i<<"erteket "<<endl;
        cin>>a[i];
    }

    int ossz =0;
    for(int i = 0; i < 5 ; i++) {
         cout<<"a[i] ertek "<<a[i]<<endl;
        cout<<"egyenkent ertek"<<ossz<<endl;
         ossz = ossz + a[i];
    }

    cout<<"Ossz ertek"<<ossz<<endl;
}