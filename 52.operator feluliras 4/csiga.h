#ifndef EMBER_H
#define EMBER_H

class Csiga { 
    private:
        int sebesseg;
    public:
        Csiga();
        Csiga(int);
        int getSebesseg() const;
        Csiga operator+(const Csiga &);
        Csiga operator+(int);
        Csiga& operator=(const Csiga &);
};

#endif