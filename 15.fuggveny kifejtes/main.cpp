#include<iostream>

using namespace std;


string elso();
string masodik();
string harmadik();

int main() {

    cout<<harmadik();
}

    string harmadik() {
        return masodik();
    }

    string masodik() {
        return elso();
    }

    string elso() {
        return "elso";
    }