#pragma once
#include "C_Wildlife_Kingdom.h"
class C_Rectangle :
    public C_Wildlife_Kingdom
{
protected:
    double width;
    double heigth;
public:
    C_Rectangle() : C_Wildlife_Kingdom(){
        this->heigth = this->width = 0;
    }
    C_Rectangle(double age, double weight, double height, char name, 
        double width, double heigth)
        : C_Wildlife_Kingdom(age, weight, height, name)
    {
        this->heigth = heigth;
        this->width = width;
    }

    friend std::ostream& operator << (std::ostream& out, const C_Rectangle& figure) {
        out << ((C_Wildlife_Kingdom)figure) <<
            " width: " << figure.width << " heigth: " << figure.heigth << " ";
        return out;
    }

    explicit operator C_Wildlife_Kingdom() {
        return C_Wildlife_Kingdom(this->age, this->weight, this->height, this->name);
    }
};

