#include "Rhombus.h"

Rhombus::Rhombus(int side_a, int angle_a, int angle_b) : Quadrangle(side_a, side_a, side_a, side_a, angle_a, angle_b, angle_a, angle_b)
{
	this->name = "Ромб";
}
