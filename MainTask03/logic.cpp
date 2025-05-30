#include "logic.h"

// Loop Realization
//int sum_of_elements(int* numbers, int size)
//{
//	if (size <= 0)
//	{
//		return 0;
//	}
//
//	int sum = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		sum += numbers[i];
//	}
//
//	return sum;
//}

// Recursion Realization
int sum_of_elements(int* numbers, int size)
{
	if (size <= 0)
	{
		return 0;
	}

	if (size == 0)
	{
		return 0;
	}

	return numbers[size - 1] + sum_of_elements(numbers, size - 1);
}