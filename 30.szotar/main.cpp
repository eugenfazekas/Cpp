#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

   void szetszed(vector<string> &angol,vector<string> &magyar) {
       string x;
       int a;
       ifstream fin("szotar.txt");
       while(!fin.eof()) {
           getline(fin,x);
           a = x.find('*');
           angol.push_back(x.substr(0,a));
           magyar.push_back(x.substr(a+1,x.size()));
       }
       fin.close();
    }

    string lefordit(string keresetszo, vector <string> &angol, vector<string> &magyar) {
        int i = 0;
        while(i<angol.size() && angol[i] != keresetszo) {
            i++;
        }
        if(i<angol.size()) {
            return magyar[i];
        }else{
            return "A szo nem szerepel az adat bazisban!";
        }
    }

    int main() {
        string kereset;
        vector<string> angol,magyar;
        cout<<"Adj meg egy keresendo szot!"<<endl;
        getline(cin, kereset);
        szetszed(angol, magyar);
        kereset =  lefordit(kereset,angol,magyar);
        cout<<kereset<<endl;
    } 