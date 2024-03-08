#include "Calculator.h"

	double add(double num1, double num2)
	{
		return num1 + num2;
	}

	double multiply(double num1, double num2)
	{
		return num1 * num2;
	}

	double subtract_1_2(double num1, double num2)
	{
		return num1 - num2;
	}

	double subtract_2_1(double num1, double num2)
	{
		return num2 - num1;
	}

	double divide_1_2(double num1, double num2)
	{
		if (num1 == 0 && num2 == 0)
		{
			return 0;
		}
		return num1 / num2;
	}

	double divide_2_1(double num1, double num2)
	{
		if (num1 == 0 && num2 == 0)
		{
			return 0;
		}
		return num2 / num1;
	}

	double pow(double num1, double num2)
	{
		int result = num1;
		for (int i = 0; i < (num2 - 1); i++)
		{
			result *= num1;
		}
		return result;
	}