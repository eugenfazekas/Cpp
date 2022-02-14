#include<iostream>

using namespace std;

class Eper {

    public:
        Eper(string x) {
            setName(x);
        }

        void setName(string x) {
            name = x;
        }

        string getName() {
            return name;
        }

        void szoveg() {
            cout<<"A legmenobb nev a: "<<getName()<<endl;
        }

    private:
        string name;

    
};


int main() {
    string nev;
    cout<<"Adj meg egy nevet!"<<endl;
    getline(cin,nev);
    Eper eper1(nev);
    Eper eper2("Kira");
    Eper eper3("pisti");
    eper1.szoveg();
    eper2.szoveg();
    eper3.szoveg();


}