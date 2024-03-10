#include "Figure.h"

Figure::Figure()
{
	this->sides = 0;
	this->name = "Фигура";
}

int Figure::getSides()
{
	return this->sides;
}

std::string Figure::getName()
{
	return this->name;
}
