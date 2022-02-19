#include <iostream>

using namespace std;

void push(int* &tomb, int x, int &meret) {
    int* tmp = new int[meret+1];
    for (int i = 0; i < meret; i++) {
        tmp[i] = tomb[i];
    }
    tmp[meret++]=x;
    delete [] tomb;
    tomb=tmp;
}

int main() {

    int * tomb = new int[0];
    int meret = 0;
    push(tomb,6,meret);
    push(tomb,5,meret);
    push(tomb,12,meret);
    push(tomb,-6,meret);
    for( int i = 0; i < meret; i++) {
        cout<<tomb[i]<<endl;
    }
    delete [] tomb;
}