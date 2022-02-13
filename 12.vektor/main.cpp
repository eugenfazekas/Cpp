#include<iostream>
#include<vector>

using namespace std;

int main() {

    vector<int> v;
    int x;
    int osszeg = 0;
    for (int i = 0 ;  i < 10 ; i++) {
        cout<<"Adj meg a(z) "<<i+1<<". elemet a vektorba!"<<endl;
        cin>>x;
        v.push_back(x);
    }

    v.pop_back();
    
    for (int i = 0; i < v.size(); i++) {
        osszeg += v[i];
    }
    cout<<"Veg osszeg: "<<osszeg<<endl;
}