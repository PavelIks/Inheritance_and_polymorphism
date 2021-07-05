#pragma once
#include <ostream>

class C_Wildlife_Kingdom
{
protected:
	double age;
	double weight;
	double height;
	char name;
public:
	C_Wildlife_Kingdom()
	{
		this->age = this->weight = 0.0;
		this->height = 0.0;
		this->name = 'A';
	}
	C_Wildlife_Kingdom(double age, double weight, double height, char name)
	{
		this->age = age;
		this->weight = weight;
		this->height = height;
		this->name = name;
	}
	friend std::ostream& operator << (std::ostream& out, const C_Wildlife_Kingdom& figure)
	{
		out
			<< "Имя: "
			<< figure.name << "\n"
			<< "Возраст: "
			<< figure.age << "\n"
			<< "Масса: "
			<< figure.weight << "\n"
			<< "Рост: "
			<< figure.height << "\n";
		return out;
	}
};

