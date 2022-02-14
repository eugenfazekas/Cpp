#include<iostream>

using namespace std;

int main() {
    string x,y,z,f;
    char ch ='!';
    f = " valami";
    cout<<"Adj meg egy szoveget"<<endl;

    getline(cin,x);

    cout<<"Adj meg egy masik szoveget"<<endl;

    getline(cin,y);
    z = x +' '+ y + ch;
    z.append(f);
    cout<<z<<" Z karaktereinek a szama: "<<z.size()<<endl;
    cout<<z<<" Z karaktereinek a szama: "<<z.length()<<endl;

    if (x<y) 
        cout<<x<<" van elorebb az abc-ben"<<endl;
    else   
      cout<<y<<" van elorebb az abc-ben"<<endl;
}