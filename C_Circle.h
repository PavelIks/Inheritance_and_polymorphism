#pragma once
#include "C_Figure.h"
class �_Circle :
	public C_Figure
{
protected:
	double radius;
public:
	//������� ����������� ��-��������� ��������
	�_Circle() : C_Figure()
	{
		this->radius = 0.0;
	}
	//������� ����������� ���������������� ��������
	�_Circle(double positionX, double positionY, double sq, char simb, double radius)
		: C_Figure(positionX, positionY, sq, simb)
	{
		this->radius = radius;
	}

	friend std::ostream& operator << (std::ostream& out, const �_Circle& figure) {
		out << ((C_Figure)figure) << " radius: " << figure.radius << " ";
		return out;
	}

	explicit operator C_Figure() {
		return C_Figure(this->positionX, this->positionY, this->sq, this->simb);
	}
};

