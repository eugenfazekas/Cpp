#include<iostream>
#include<sstream>

using namespace std;

void vane(string &x) {
    istringstream szamok(x);
    x.clear();
    ostringstream vissza(x);
    int szam;
    while(szamok>>szam && szam>=0) {}
    bool van = szam<0;
    vissza<<van;
    x=vissza.str();
}

int main() {

    string x;
    cout<<"Adj meg egy szamsort!"<<endl;
    getline(cin,x);
    vane(x);
    cout<<x<<endl;
}