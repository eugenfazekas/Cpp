#ifndef OSZTALY_H
#define OSZTALY_H

class Osztaly {
private:
    int ertek;
public:
    Osztaly();
    Osztaly(int);
    bool operator ==(const Osztaly &other) const {
        return ertek == other.ertek;
            }
    bool operator !=(const Osztaly &other) const {
        return ertek != other.ertek;    
    }
}; 
#endif