#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

void beolvas(vector<string> &v) {
    string sor;
    ifstream fin("dummy.txt");
    while(!fin.eof()) {
        getline(fin,sor);
        cout<<sor<<endl;
        v.push_back(sor);
    }
    fin.close();
}

void kiir(vector<string> v) {
    ofstream fout("masolat.txt");
    for(int i = 0; i < v.size(); i++ ){
        fout<<v[i]<<endl;
    }
    fout.close();
}

int main() {
    vector<string> v;
    beolvas(v);
    kiir(v);
}