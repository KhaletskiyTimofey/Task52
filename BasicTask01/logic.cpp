#include "logic.h"

// Loop Realization
//int count_digits(int number)
//{
//	if (number == 0)
//	{
//		return 1;
//	}
//
//	int digit = 0;
//
//	while (number != 0)
//	{
//		digit++;
//
//		number /= 10;
//	}
//
//	return digit;
//}

// Recursion Realization
int count_digits(int number)
{
	if (number == 0 || number > 0 && number <= 9)
	{
		return 1;
	}

	number = number < 0 ? -number : number;

	return count_digits(number / 10) + 1;
}