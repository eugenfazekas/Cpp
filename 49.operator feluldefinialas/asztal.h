#ifndef ASZTAL_H
#define ASZTAL_H
#include <string>

using namespace std;

class Asztal {
private:
    int labak_szama;
    string szin;
    string anyag;
public:
    Asztal();
    Asztal(int,string,string);
    bool operator == (const Asztal &other) {
        return (labak_szama == other.labak_szama
        && anyag == other.anyag);
    }
    bool operator != (const Asztal &other) {
        return (labak_szama != other.labak_szama
        || anyag != other.anyag);
    }
}; 
#endif