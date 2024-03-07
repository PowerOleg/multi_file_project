#include <iostream>
#include "Calculator.h"

	double Calculator::add()
	{
		return num1 + num2;
	}

	double Calculator::multiply()
	{
		return num1 * num2;
	}

	double Calculator::subtract_1_2()
	{
		return num1 - num2;
	}

	double Calculator::subtract_2_1()
	{
		return num2 - num1;
	}

	double Calculator::divide_1_2()
	{
		if (num1 == 0 && num2 == 0)
		{
			return 0;
		}
		return num1 / num2;
	}

	double Calculator::divide_2_1()
	{
		if (num1 == 0 && num2 == 0)
		{
			return 0;
		}
		return num2 / num1;
	}

	bool Calculator::set_num1(double num1)
	{
		this->num1 = num1;
		return true;
	}

	bool Calculator::set_num2(double num2)
	{
		this->num2 = num2;
		return true;
	}

	bool Calculator::has_error()
	{
		if (num1 / num2 < std::numeric_limits<double>::epsilon())
		{
			return true;
		}
		else if (num2 / num1 < std::numeric_limits<double>::epsilon())
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	int Calculator::pow()
	{
		int result = num1;
		for (int i = 0; i < (num2 - 1); i++)
		{
			result *= num1;
		}
		return result;
	}