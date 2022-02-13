#include<iostream>

using namespace std;


void szoroz(int &a);


int main() { 

    int a;
    cout<<"Adj meg egy szamot"<<endl;
    cin>>a;
    szoroz(a);
    cout<<"Az  a erteke: "<<a<<endl;
}

void szoroz(int &a) {
    a = a*6; //innetol a erteke megmarad
}