#include <iostream>
#include "Calculator.h"


int main(int argc, char** argv)
{
	setlocale(LC_ALL, "ru");
	double num1 = 0;
	std::cout << "Введите первое число: ";
	std::cin >> num1;
	double num2 = 0;
	std::cout << "Введите второе число: ";
	std::cin >> num2;
	int operation = 0;
	std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> operation;
	double result = 0;
	switch (operation)
	{
	case 1:
		result = add(num1, num2);
		std::cout << num1 << " + " << num2 << " = " << result;
		break;
	case 2:
		result = subtract_1_2(num1, num2);
		std::cout << num1 << " - " << num2 << " = " << result;
		break;
	case 3:
		result = multiply(num1, num2);
		std::cout << num1 << " * " << num2 << " = " << result;
		break;
	case 4:
		result = divide_1_2(num1, num2);
		std::cout << num1 << " / " << num2 << " = " << result;
		break;
	case 5:
		result = pow(num1, num2);
		std::cout << num1 << " в степени " << num2 << " = " << result;
		break;
	default:
		std::cout << "Неверный ввод";
		break;
	}
	return 0;
}
