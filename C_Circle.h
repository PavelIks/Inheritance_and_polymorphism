#pragma once
#include "C_Figure.h"
class С_Circle :
	public C_Figure
{
protected:
	double radius;
public:
	//вызвали конструктор по-умолчанию родителя
	С_Circle() : C_Figure()
	{
		this->radius = 0.0;
	}
	//вызвали конструктор парамметрический родителя
	С_Circle(double positionX, double positionY, double sq, char simb, double radius)
		: C_Figure(positionX, positionY, sq, simb)
	{
		this->radius = radius;
	}

	friend std::ostream& operator << (std::ostream& out, const С_Circle& figure) {
		out << ((C_Figure)figure) << " radius: " << figure.radius << " ";
		return out;
	}

	explicit operator C_Figure() {
		return C_Figure(this->positionX, this->positionY, this->sq, this->simb);
	}
};

