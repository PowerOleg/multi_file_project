#include <iostream>
#include "Counter.h"

Counter::Counter()
{
	this->count = 1;
}

Counter::Counter(int initial_count)
{
	this->count = initial_count;
}

void Counter::increment()
{
	this->count++;
}

void Counter::decrement()
{
	this->count--;
}

void Counter::print_count()
{
	std::cout << this->count << std::endl;
}

void loop(Counter* counter)
{
	char input3 = '0';
	while (input3 != 'x')
	{
		std::cout << "Введите команду('+', '-', '=' или 'x'(eng)): " << std::endl;
		std::cin >> input3;
		switch (input3)
		{
		case '+':
			counter->increment();
			break;
		case '-':
			counter->decrement();
			break;
		case '=':
			counter->print_count();
			break;
		default:
			break;
		}
	};
}