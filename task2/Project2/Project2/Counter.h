#pragma once
class Counter
{
	private:
		int count;
	public:
		Counter();
		Counter(int initial_count);
		void increment();
		void decrement();
		void print_count();
};

void loop(Counter* counter);

