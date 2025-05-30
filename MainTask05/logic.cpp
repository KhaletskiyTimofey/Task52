#include "logic.h"

// Loop Realization
//bool is_palindrom(int* numbers, int size)
//{
//	if (size <= 0)
//	{
//		return false;
//	}
//
//	bool is_numbers_palindrom = true;
//	int half_size = size / 2;
//
//	for (int i = 0; i < half_size; i++)
//	{
//		if (numbers[i] != numbers[size - i - 1])
//		{
//			is_numbers_palindrom = false;
//		}
//	}
//
//	return is_numbers_palindrom;
//}

// Recursion Realization
bool is_numbers_palindrom(int* numbers, int size, int i)
{
	if (i >= size / 2)
	{
		return true;
	}

	return numbers[i] == numbers[size - i - 1] && is_numbers_palindrom(numbers, size, i + 1);
}

bool is_palindrom(int* numbers, int size)
{
	if (size <= 0)
	{
		return false;
	}

	return is_numbers_palindrom(numbers, size, 0);
}