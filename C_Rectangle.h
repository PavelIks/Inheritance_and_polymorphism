#pragma once
#include "C_Figure.h"
class C_Rectangle :
    public C_Figure
{
protected:
    double width;
    double heigth;
public:
    C_Rectangle() : C_Figure(){
        this->heigth = this->width = 0;
    }
    C_Rectangle(double positionX, double positionY, double sq, char simb, 
        double width, double heigth)
        : C_Figure(positionX, positionY, sq, simb)
    {
        this->heigth = heigth;
        this->width = width;
    }

    friend std::ostream& operator << (std::ostream& out, const C_Rectangle& figure) {
        out << ((C_Figure)figure) <<
            " width: " << figure.width << " heigth: " << figure.heigth << " ";
        return out;
    }

    explicit operator C_Figure() {
        return C_Figure(this->positionX, this->positionY, this->sq, this->simb);
    }
};

