#ifndef TAROLO_H
#define TAROLO_H
#include "ember.h"

class Tarolo {
private:
    int meret;
    Ember* tomb;
public:
    Tarolo();
    Tarolo(const Tarolo &);
    ~Tarolo();
    Tarolo& operator=(const Tarolo &);
    Ember operator[] (int);
    void push_back(Ember);
    int getSize() const;
};

#endif