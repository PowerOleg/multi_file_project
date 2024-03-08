#include <iostream>
#include <iomanip>
#include "Counter.h"

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "ru");

	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: " << std::endl;
	char input1[5]{};
	char yes[5]{ "¤ " };
	char no[7]{ "­Ґв" };
	std::cin >> std::setw(5) >> input1;
	Counter* counter = nullptr;
	if (!strcmp(input1, yes))
	{
		std::cout << "Введите начальное значение счётчика: " << std::endl;
		int input2 = 0;
		std::cin >> input2;
		counter = new Counter(input2);
	}
	else if (!strcmp(input1, no))
	{
		counter = new Counter;
	}
	else
	{
		std::cout << "Ошибка. Можно было вводить только да или нет" << std::endl;
		std::cout << "До свидания!";
		return 1;
	}
	loop(counter);
	delete counter;
	std::cout << "До свидания!";
	return 0;
};