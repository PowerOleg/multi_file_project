#include "Triangle.h"

Triangle::Triangle(int side_a, int side_b, int side_c, int angle_a, int angle_b, int angle_c)
{
	this->sides = 3;
	this->name = "�����������";
	this->side_a = side_a;
	this->side_b = side_b;
	this->side_c = side_c;
	this->angle_a = angle_a;
	this->angle_b = angle_b;
	this->angle_c = angle_c;
}

void Triangle::print_side_values()
{
	std::cout << "�������: " << "a=" << this->side_a << " b=" << this->side_b << " c=" << this->side_c << std::endl;
}

void Triangle::print_angle_values()
{
	std::cout << "����: " << "A=" << this->angle_a << " B=" << this->angle_b << " C=" << this->angle_c << std::endl;
}

