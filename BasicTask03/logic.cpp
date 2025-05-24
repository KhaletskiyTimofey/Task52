#include "logic.h"

// Loop Realization
//bool equals(int number, int sum)
//{
//	if (number < 0 || sum < 0)
//	{
//		return false;
//	}
//
//	int digits_sum = 0;
//
//	while (number != 0)
//	{
//		digits_sum += number % 10;
//		number /= 10;
//	}
//
//	return digits_sum == sum;
//}

// Recursion Realization
int find_sum(int number)
{
	if (number == 0)
	{
		return 0;
	}

	return find_sum(number / 10) + number % 10;
}

bool equals(int number, int sum)
{
	if (number < 0 || sum < 0)
	{
		return false;
	}

	return find_sum(number) == sum;
}