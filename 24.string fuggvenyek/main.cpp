#include<iostream>
#include<string>

using namespace std;

    string str1,str2;
    int i;

    void insert1() {
        str2 = "alma";
        cout<<"Adj meg egy stringet"<<endl;
        getline(cin, str1);
        str1.insert(3,str2);
        cout<<"Insert1: "<<str1<<endl;
    }

    void insert2() {
        str1.insert(3,5,'n');
        cout<<"Insert2: "<<str1<<endl;
    }

    void erase() {
        str1.erase(3,5);
        cout<<"Erase: "<<str1<<endl;
    }

    void substring() {
        string subst;
        subst = str1.substr(5,4);
        cout<<"Substring: "<<subst<<endl;
    }

    void replace1() {
       str1.replace(10,5,str2);//i,n,string
       cout<<"Replace1: "<<str1<<endl;
    }

    void replace2() {
       str1.replace(1,5,4,'n');//i,n,string
       cout<<"Replace2: "<<str1<<endl;
    }

    void find1() {
        i = str1.find(str2);
        cout<<"Find1: "<<i<<endl;
    }

        void find2() {
        i = str1.find(str2,4); //find from char 4
        cout<<"Find1: "<<i<<endl;
    }

    void find3() {
        i = str1.find('m'); //find char m
        cout<<"Find1: "<<i<<endl;
    }

    void find4() {
        i = str1.find('m',5); //find char from char 5
        cout<<"Find1: "<<i<<endl;
    }

    void rfind1() {
        i = str1.rfind('a'); //find char from back
        cout<<"RFind1: "<<i<<endl;
    }

    
    void rfind2() {
        i = str1.rfind(str2); //find string from back
        cout<<"RFind2: "<<i<<endl;
    }

    int main() { 
        insert1();
        insert2();
        erase();
        substring();
        replace1();
        replace2();
        find1();
        find2();
        find3();
        find4();
        rfind1();
        rfind2();
    }