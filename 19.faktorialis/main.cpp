#include<iostream>

using namespace std;

int fakt(int x)  {
    if (x == 1) 
        return 1;
    else {
        return x*fakt(x-1);
    }

};


int main () {
    cout<<fakt(5)<<endl;
}