#include "csiga.h"

Csiga::Csiga() {}

Csiga::Csiga(int sebesseg): sebesseg(sebesseg) {}

int Csiga::getSebesseg() const { return sebesseg; }

Csiga Csiga::operator+(const Csiga &other) {
    return Csiga(sebesseg+other.sebesseg);
}

Csiga Csiga::operator+(int _sebesseg) {
    return Csiga(sebesseg+_sebesseg);
}

Csiga& Csiga::operator=(const Csiga &other) {
    sebesseg= other.sebesseg;
    return *this;
}