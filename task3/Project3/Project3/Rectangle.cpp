#include "Rectangle.h"

Rectangle::Rectangle(int side_a, int side_b) : Quadrangle(side_a, side_b, side_a, side_b, 90, 90, 90, 90)
{
	this->name = "Прямоугольник";
}