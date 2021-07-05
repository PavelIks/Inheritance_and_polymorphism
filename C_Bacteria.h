#pragma once
#include "C_Wildlife_Kingdom.h"
class C_Bacteria :
	public C_Wildlife_Kingdom
{
protected:
	double radius;
public:
	//вызвали конструктор по-умолчанию родителя
	C_Bacteria() : C_Wildlife_Kingdom()
	{
		this->radius = 0.0;
	}
	//вызвали конструктор парамметрический родителя
	C_Bacteria(double age, double weight, double height, char name, double radius)
		: C_Wildlife_Kingdom(age, weight, height, name)
	{
		this->radius = radius;
	}

	friend std::ostream& operator << (std::ostream& out, const C_Bacteria& figure)
	{
		out << ((C_Wildlife_Kingdom)figure) << " radius: " << figure.radius << " ";
		return out;
	}

	explicit operator C_Wildlife_Kingdom()
	{
		return C_Wildlife_Kingdom(this->age, this->weight, this->height, this->name);
	}
};

