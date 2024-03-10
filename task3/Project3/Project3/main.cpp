#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Isosceles_triangle.h"
#include "Right_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

void print_info(Triangle* figure)
{
	std::cout << figure->getName() << ": " << std::endl;
	figure->print_side_values();
	figure->print_angle_values();
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "ru");
	Triangle* tri = new Triangle(10, 20, 30, 50, 60, 70);
	Right_triangle* right_tri = new Right_triangle(10, 20, 30, 30, 60);
	Isosceles_triangle* iso_tri = new Isosceles_triangle(10, 20, 50, 80);
	Equilateral_triangle* eq_tri = new Equilateral_triangle(30, 60);
	Quadrangle* quad = new Quadrangle(10, 20, 30, 40, 50, 60, 125, 125);
	Rectangle* rectangle = new Rectangle(10, 20);
	Square* square = new Square(10);
	Parallelogram* parallelogram = new Parallelogram(10, 30, 150, 30);
	Rhombus* rhombus = new Rhombus(20, 20, 160);

	print_info(tri);
	std::cout << std::endl;
	print_info(right_tri);
	std::cout << std::endl;
	print_info(iso_tri);
	std::cout << std::endl;
	print_info(eq_tri);
	std::cout << std::endl;
	print_info(quad);
	std::cout << std::endl;
	print_info(rectangle);
	std::cout << std::endl;
	print_info(square);
	std::cout << std::endl;
	print_info(parallelogram);
	std::cout << std::endl;
	print_info(rhombus);
	std::cout << std::endl;

	delete tri;
	delete right_tri;
	delete iso_tri;
	delete eq_tri;
	delete quad;
	delete rectangle;
	delete square;
	delete parallelogram;
	delete rhombus;
	return 0;
}