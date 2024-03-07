#include <iostream>
#include "Calculator.h"


int main(int argc, char** argv)
{
	setlocale(LC_ALL, "ru");
	Calculator calc;

	do
	{
		double num1 = 0;
		std::cout << "Введите первое число:";
		std::cin >> num1;
		calc.set_num1(num1);
		double num2 = 0;
		std::cout << "Введите второе число: ";
		std::cin >> num2;
		calc.set_num2(num2);

		std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";

		std::cout << num1 << " " << num2 << std::endl;
		double sum = calc.add();
		double multiplication = calc.multiply();

		double subtract_1_2 = calc.subtract_1_2();
		double subtract_2_1 = calc.subtract_2_1();

		double divide_1_2 = calc.divide_1_2();
		double divide_2_1 = calc.divide_2_1();

		calc.set_num1(num1);
		calc.set_num2(num2);
		if (calc.hasError())
		{
			std::cout << "Error!" << std::endl;
			continue;
		}
		std::cout << "num1 + num2 = " << sum << std::endl;
		std::cout << "num1 - num2 = " << subtract_1_2 << std::endl;
		std::cout << "num2 - num1 = " << subtract_2_1 << std::endl;
		std::cout << "num1 * num2 = " << multiplication << std::endl;
		if (num1 == 0 && num2 == 0)
		{
			std::cout << "num1 / num2 = " << "Результат не определен" << std::endl;
			std::cout << "num2 / num1 = " << "Результат не определен" << std::endl;
		}
		else
		{
			std::cout << "num1 / num2 = " << divide_1_2 << std::endl;
			std::cout << "num2 / num1 = " << divide_2_1 << std::endl;
		}

	} while (true);
	return 0;
}
