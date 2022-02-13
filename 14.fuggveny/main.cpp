#include<iostream>

using namespace std;

    int kerulet(int oldal1, int oldal2) {

        return oldal1 * oldal2;
    }

    int a,b;

int main() {
    cout<<"Add meg a teglalap elso odalat"<<endl;
    cin>>a;
    cout<<"Add meg a teglalap masodik odalat"<<endl;
    cin>>b;
    cout<<"A teglalap terulete: "<<kerulet(a,b)<<endl;
}