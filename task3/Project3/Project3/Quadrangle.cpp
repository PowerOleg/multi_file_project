#include "Quadrangle.h"

Quadrangle::Quadrangle(int side_a, int side_b, int side_c, int side_d, int angle_a, int angle_b, int angle_c, int angle_d) : Triangle(side_a, side_b, side_c, angle_a, angle_b, angle_c)
{
	this->sides = 4;
	this->name = "Четырехугольник";
	this->side_d = side_d;
	this->angle_d = angle_d;
}

void Quadrangle::print_side_values()
{
	std::cout << "Стороны: " << "a=" << side_a << " b=" << side_b << " c=" << side_c << " d=" << side_d << std::endl;
}

void Quadrangle::print_angle_values()
{
	std::cout << "Углы: " << "A=" << angle_a << " B=" << angle_b << " C=" << angle_c << " D=" << angle_d << std::endl;
}