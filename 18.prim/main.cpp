#include<iostream>
#include<cmath>
using namespace std;

    bool prime(int x) {
        int i=2; 
        while( i<=sqrt(x) && x%i != 0 )
        i++;
        return i>sqrt(x);
    }

int main () {

    int x;
    cout<<"Adj meg egy szamot! "<<endl;
    cin>>x;
    if(prime(x)) {
        cout<<"A szam prim! "<<endl;
    } else {
          cout<<"A szam nem prim! "<<endl;
    }
}