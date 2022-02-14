#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

int main() {
    string sor;
    ifstream fin("szoveg.txt");
    ofstream fout("max.txt");
    while(!fin.eof()) {
        getline(fin,sor);
        if(sor.size() == 0) {
            cout<<sor;
            fout<<"Nincs a sorban szam"<<endl;
        } else {
            istringstream szamok(sor);
            int szam,max;
            szamok>>max;
                while(szamok>>szam) {
                    if(szam > max) 
                        max = szam;
                }
            fout<<max<<endl;
        }
    }      
}
