#include<iostream>
#include<sstream>
#include<vector>

using namespace std;



void beker(string &input) {
    cout<<"Adj meg egy szamsort!"<<endl;
    getline(cin,input);
}

void szetszed(vector<int> &v, string x) {

    istringstream szamok(x);
    int szam;
    while(szamok>>szam) {
        v.push_back(szam);
    }
}

int main() {

        string x;
        vector<int> v;
        beker(x);
        szetszed(v,x);

        for(int i = 0; i < v.size(); i++) {
            cout<<"A vektor "<<i<<" -ik eleme "<<v[i]<<endl;
        }
}