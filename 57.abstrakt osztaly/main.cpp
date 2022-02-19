#include <iostream>
#include <vector>

using namespace std ;

class Enemy {
    public:
        Enemy() { dmg = 0;}
        Enemy(int _dmg): dmg(_dmg) {}
        virtual void Attack() = 0;
        virtual void setDamage(int d) = 0;
        virtual int getDamage() const = 0;
    protected:
        int dmg;    
};

class Monster : public Enemy {
        public:
            Monster(): Enemy() {}
            Monster(int dmg): Enemy(dmg) {}
            void Attack() {
                cout<<"A szorny "<<dmg<<" eleterot harapot le rolad."<<endl;
            }
            void setDamage(int d) { this->dmg = d;}
            int getDamage() const { return dmg;}
    };

class Dragon : public Enemy { 
        public:
            Dragon(): Enemy() {}
            Dragon(int dmg): Enemy(dmg) {}
            void Attack() {
                cout<<"A sarkany "<<dmg<<" eleterot egetett le rolad."<<endl;
            }
            void setDamage(int d) { this->dmg = d;}
            int getDamage() const { return dmg;}
    };

int main() {

    Monster m(150);
    Dragon d(512);

    Enemy* p = &m;
    p->Attack();
    p->setDamage(25);
    cout<<p->getDamage()<<endl;

    p=&d;
    p->Attack();
    p->setDamage(110);
    cout<<p->getDamage()<<endl;

}