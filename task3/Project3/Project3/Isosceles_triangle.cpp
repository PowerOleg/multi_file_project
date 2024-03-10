#include "Isosceles_triangle.h"

Isosceles_triangle::Isosceles_triangle(int side_a, int side_b, int angle_a, int angle_b) : Triangle(side_a, side_b, side_a, angle_a, angle_b, angle_a)
{
	this->name = "Равнобедренный треугольник";
}