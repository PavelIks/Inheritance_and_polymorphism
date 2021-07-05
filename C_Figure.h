#pragma once
#include <ostream>

class C_Figure
{
protected:
	double positionX;
	double positionY;
	double sq;
	char simb;
public:
	C_Figure() {
		this->positionX = this->positionY = 0.0;
		this->sq = 0.0;
		this->simb = 'A';
	}
	C_Figure(double positionX, double positionY, double sq, char simb) {
		this->positionX = positionX;
		this->positionY = positionY;
		this->sq = sq;
		this->simb = simb;
	}
	friend std::ostream& operator << (std::ostream& out, const C_Figure& figure) {
		out << "position of " << figure.simb << ": [" << figure.positionX <<
			":" << figure.positionY << "] and square is " << figure.sq << " ";
		return out;
	}
};

