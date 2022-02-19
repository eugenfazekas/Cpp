#include <iostream>
#include <vector>

using namespace std ;

class Enemy {
    public:
        Enemy() { dmg = 0;}
        Enemy(int _dmg): dmg(_dmg) {}
        virtual int Attack() = 0;
    protected:
        int dmg;    
};

class Monster : public Enemy {
        public:
            Monster(): Enemy() {}
            Monster(int dmg): Enemy(dmg) {}
            int Attack() {
                return dmg;
            }
    };

class Dragon : public Enemy { 
        public:
            Dragon(): Enemy() {}
            Dragon(int dmg): Enemy(dmg) {}
            int Attack() {
                return dmg;
            }
    };

int main() {

    Monster m(150);
    Dragon d(512);
    vector<Enemy*>v;

    v.push_back(&m);
    v.push_back(&d);

    for (unsigned int i = 0 ; i < v.size(); i++ ) {
        if(dynamic_cast<Dragon*>(v[i]) != NULL) {
            cout<<"Sarkany: "<< v[i]->Attack()<<endl;
        }    
        if(dynamic_cast<Monster*>(v[i]) != NULL) {
            cout<<"Szorny : "<< v[i]->Attack()<<endl;
            }
        
    }
}