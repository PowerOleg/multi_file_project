#pragma once

class Calculator
{
private:
	double num1, num2;
public:
	double add();

	double multiply();

	double subtract_1_2();

	double subtract_2_1();

	double divide_1_2();

	double divide_2_1();

	bool set_num1(double num1);

	bool set_num2(double num2);

	bool hasError();

	int pow_2(int x);
};

