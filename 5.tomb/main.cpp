#include <iostream>

using namespace std;

int main() { 

    int a [5];
    cout<<"Adj meg egy szamot a tomb harmaddik helyere"<<endl;
    cin>>a[3];
    a[4] = a[3] + 1;
    cout<<"A tom 3 helye: "<<a[3]<<endl;
    cout<<"A tom 4 helye: "<<a[4]<<endl;
    cout<<"a3 + 1 = "<<a[4]<<endl;
}