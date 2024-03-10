#pragma once
#include "Figure.h"

class Triangle : public Figure
{
protected:
	int side_a;
	int side_b;
	int side_c;
	int angle_a;
	int angle_b;
	int angle_c;
public:
	Triangle(int side_a, int side_b, int side_c, int angle_a, int angle_b, int angle_c);
	virtual void print_side_values();
	virtual void print_angle_values();
};

