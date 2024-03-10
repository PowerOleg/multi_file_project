#include "Right_triangle.h"

Right_triangle::Right_triangle(int side_a, int side_b, int side_c, int angle_a, int angle_b) : Triangle(side_a, side_b, side_c, angle_a, angle_b, 90)
{
	this->name = "Прямоугольный треугольник";
}
