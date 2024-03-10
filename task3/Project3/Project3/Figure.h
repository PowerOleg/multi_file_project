#pragma once
#include <iostream>

class Figure
{
protected:
	int sides;
	std::string name;
public:
	Figure();
	int getSides();
	std::string getName();
};

