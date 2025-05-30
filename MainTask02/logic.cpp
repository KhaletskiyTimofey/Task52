#include "logic.h"

// Recursion Realization
int count_divs(int number, int divider)
{
	if (divider == 1)
	{
		return 0;
	}

	return (number % divider == 0) + count_divs(number, divider - 1);
}

int divs(int number)
{
	if (number <= 3)
	{
		return 0;
	}

	return count_divs(number, number / 2);
}