#include<iostream>

using namespace std;

class Eper {
    public: 
        void setName(string nev) {
            name = nev;
        }

        string getName() {
            return name;
        }

        void szoveg() {
            cout<<"A legmenobb nev a: "<<getName()<<endl;
        }

    private: string name;
};

int main() {
    string nev;
    cout<<"Adj meg egy nevet!"<<endl;
    getline(cin,nev);
    Eper eper;
    eper.setName(nev);
    eper.szoveg();
}