#include "logic.h"

// Loop Realization
//void reverse(int* numbers, int size)
//{
//	if (size <= 0)
//	{
//		return;
//	}
//
//	int half_size = (size + 1) / 2;
//
//	for (int i = 0; i < half_size; i++)
//	{
//		int t = numbers[i];
//		numbers[i] = numbers[size - i - 1];
//		numbers[size - i - 1] = t;
//	}
//}

// Recursion Realization
void reverse_elements(int* numbers, int size, int i)
{
	int half_size = (size + 1) / 2;

	if (half_size <= i)
	{
		return;
	}

	int t = numbers[i];
	numbers[i] = numbers[size - i - 1];
	numbers[size - i - 1] = t;

	reverse_elements(numbers, size, i + 1);
}

void reverse(int* numbers, int size)
{
	if (size <= 0)
	{
		return;
	}

	reverse_elements(numbers, size, 0);
}