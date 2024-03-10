#include "Equilateral_triangle.h"

Equilateral_triangle::Equilateral_triangle(int side_a, int angle_a) : Triangle(side_a, side_a, side_a, angle_a, angle_a, angle_a)
{
	this->name = "Равносторонний треугольник";
}