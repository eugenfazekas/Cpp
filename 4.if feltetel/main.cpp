#include <iostream>

using namespace std;

int main() { 
int a,b,c;
cout<<"Ad meg a haromszog elso oldalat"<<endl;
cin>>a;
cout<<"Ad meg a haromszog masodik oldalat"<<endl;
cin>>b;
cout<<"Ad meg a haromszog harmadik oldalat"<<endl;
cin>>c;

    if(a+b>c && a+c>b && b+c>a && (a != 0 || b != 0 || c != 0)) {
        cout<<"A haromszog szerkesztheto"<<endl;
    } else {
        cout<<"A haromszog nem szerkesztheto"<<endl;
    }
}