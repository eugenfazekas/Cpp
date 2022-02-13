#include<iostream>
#include<vector>

using namespace std;

void beker(vector<int> &x);
void kiir(vector<int> x);

int main () {

    vector<int> v;
    beker(v);
    kiir(v);  
}

void beker(vector<int> &x) {
    int szam;
    cout<<"Ad meg az elso szamot a vektorba "<<endl;
    cin>>szam;
    while (szam != 0) {
        x.push_back(szam);
            cout<<"Ad meg a kovetkezo szamot a vektorba "<<endl;
            cin>>szam;
    }
}

void kiir(vector<int> x) {
    for(int i = 0; i < x.size(); i++){
        cout<<"A vektor "<<i+1<<". eleme: "<<x[i]<<endl;
    }
}