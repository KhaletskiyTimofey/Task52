#include "logic.h"

long long pow(int number, int power)
{
	if (power == 2)
	{
		return number * number;
	}

	return pow(number, power - 1) * (long long) number;
}

int sum_of_digits(long long number)
{
	if (number == 0)
	{
		return 0;
	}

	return number % 10 + sum_of_digits(number / 10);
}

bool try_number(int number, int power)
{
	long long powered_number = pow(number, power);

	if (powered_number < number)
	{
		return false;
	}

	return sum_of_digits(powered_number) == number || try_number(number, power + 1);
}

string find_numbers(int n)
{
	if (n <= 0)
	{
		return "Incorrect count of numbers!";
	}

	if (n == 1)
	{
		return "1";
	}

	return find_numbers(n - 1) + (try_number(n, 2) ? " " + to_string(n) : "");
}