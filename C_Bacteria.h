#pragma once
#include "C_Wildlife_Kingdom.h"
class C_Bacteria :
	public C_Wildlife_Kingdom
{
protected:
	char* metabolism;
public:
	//вызвали конструктор по-умолчанию родителя
	C_Bacteria() : C_Wildlife_Kingdom()
	{
		this->metabolism = (char*)"Фототрофы, Литотрофы, Органотрофы";
	}
	//вызвали конструктор парамметрический родителя
	C_Bacteria
	(double age, double weight, double height, char* name, char* metabolism)
		: C_Wildlife_Kingdom
	(age, weight, height, name)
	{
		this->metabolism = metabolism;
	}

	friend std::ostream& operator << (std::ostream& out, const C_Bacteria& bacteria)
	{
		out << ((C_Wildlife_Kingdom)bacteria) << "Тип питания бактерии: " << bacteria.metabolism << " ";
		return out;
	}

	explicit operator C_Wildlife_Kingdom()
	{
		return C_Wildlife_Kingdom(this->age, this->weight, this->height, this->name);
	}
};

