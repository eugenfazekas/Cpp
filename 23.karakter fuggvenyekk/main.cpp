#include<iostream>

using namespace std;

int main() {

    string str;
    cout<<"Adj meg egy szovet!"<<endl;
    getline(cin,str);

    cout<<"str before is lower "<<str<<endl;

    if(islower(str[0]))
        str[0]=toupper(str[0]);

    cout<<"str after is lower "<<str<<endl;

    if(isupper(str[0]))    
        str[0]=tolower(str[0]);

    cout<<"str after is upper "<<str<<endl;

    int a = 0;

    for (int i = 0; i< str.size(); i++ ) {
        if(isdigit(str[i]))
        a++;
    }

    a > 0 ? cout<<"Van benne "<<a<<" szam" : cout<<"Nincs benne szam";
}