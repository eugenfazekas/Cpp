#include<iostream>
#include<sstream>
#include<vector>
#include<string>

using namespace std;

void beker(string &input) {
    cout<<"Adj meg egy szamsort!"<<endl;
    getline(cin,input);
}

void szetszed(vector<int> &v, string x) {

    istringstream szamok(x);
    int szam;
    while(szamok>>szam) {
        if(szam > 0 )
         v.push_back(szam);
    }
}

void visszatesz(vector<int> v, string &x) {
    ostringstream vissza(x);
    for(int i = 0; i< v.size(); i++ ) {
        vissza<<v[i]<<" ";
    }
        x=vissza.str(); 
        x.erase(x.size()-1,1);
}

int main() {

        string x;
        vector<int> v;
        beker(x);
        szetszed(v,x);
        for(int i = 0; i < v.size(); i++) {
            cout<<"A vektor "<<i<<" -ik eleme "<<v[i]<<endl;
        }
        x.clear();
        visszatesz(v,x);
        cout<<x<<endl;
}