#pragma once
#include "C_Wildlife_Kingdom.h"
class C_Bacteria :
	public C_Wildlife_Kingdom
{
protected:
	char* metabolism;
public:
	//������� ����������� ��-��������� ��������
	C_Bacteria() : C_Wildlife_Kingdom()
	{
		this->metabolism = (char*)"���������, ���������, �����������";
	}
	//������� ����������� ���������������� ��������
	C_Bacteria
	(double age, double weight, double height, char* name, char* metabolism)
		: C_Wildlife_Kingdom
	(age, weight, height, name)
	{
		this->metabolism = metabolism;
	}

	friend std::ostream& operator << (std::ostream& out, const C_Bacteria& bacteria)
	{
		out << ((C_Wildlife_Kingdom)bacteria) << "��� ������� ��������: " << bacteria.metabolism << " ";
		return out;
	}

	explicit operator C_Wildlife_Kingdom()
	{
		return C_Wildlife_Kingdom(this->age, this->weight, this->height, this->name);
	}
};

