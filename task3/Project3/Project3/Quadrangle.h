#pragma once
#include "Triangle.h"
class Quadrangle : public Triangle
{
protected:
	int side_d;
	int angle_d;
public:
	Quadrangle(int side_a, int side_b, int side_c, int side_d, int angle_a, int angle_b, int angle_c, int angle_d);
	void print_side_values() override;
	void print_angle_values() override;
};

