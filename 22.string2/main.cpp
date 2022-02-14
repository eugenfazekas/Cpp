#include<iostream>

using namespace std;

int main() {

    string nev; 
    cout<<"Ad meg a neved "<<endl;
    getline(cin,nev);
    for(int i=nev.size()-1; i>=0; i--)
    cout<<nev[i];
}