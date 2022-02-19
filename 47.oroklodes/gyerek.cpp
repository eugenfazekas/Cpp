#include "gyerek.h"

Gyerek::Gyerek(int _a, int _b, int _c, int _d) : Szulo (_a,_b,_c),d (_d) {}

void Gyerek::setA(int _a) { this -> a = _a;}