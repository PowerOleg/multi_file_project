#include <iostream>

class Calculator
{
private:
	double num1, num2;

public:
	double add()
	{
		return num1 + num2;
	}

	double multiply()
	{
		return num1 * num2;
	}

	double subtract_1_2()
	{
		return num1 - num2;
	}

	double subtract_2_1()
	{
		return num2 - num1;
	}

	double divide_1_2()
	{
		if (num1 == 0 && num2 == 0)
		{
			return 0;
		}
		return num1 / num2;
	}

	double divide_2_1()
	{
		if (num1 == 0 && num2 == 0)
		{
			return 0;
		}
		return num2 / num1;
	}

	bool set_num1(double num1)
	{
		this->num1 = num1;
		return true;
	}

	bool set_num2(double num2)
	{
		this->num2 = num2;
		return true;
	}

	bool hasError()
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

	int pow_2(int x)
	{
		return x * x;
	}
};