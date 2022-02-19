#ifndef PAINTIT_H
#define PAINTIT_H

class PaintIt{
    public:
        PaintIt();
        int getPaintCost(int) const;
    protected:
        int price;    
};
#endif