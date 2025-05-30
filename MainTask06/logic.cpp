#include "logic.h"

// Loop Realization
//bool check_is_number_automorphic(int number)
//{
//	long long square_number = (long long) number * number;
//	int number_copy = number;
//	int digit = 0;
//
//	while (number_copy != 0)
//	{
//		number_copy /= 10;
//		digit++;
//	}
//
//	bool is_automorphic = true;
//
//	for (int i = 0; i < digit; i++)
//	{
//		if (square_number % 10 != number % 10)
//		{
//			is_automorphic = false;
//		}
//
//		square_number /= 10;
//		number /= 10;
//	}
//
//	return is_automorphic;
//}
//
//string print_automorphic_numbers(int n)
//{
//	if (n <= 0)
//	{
//		return "";
//	}
//
//	string numbers = "";
//	int number = 1;
//
//	for (int i = 0; i < n; i++)
//	{
//		while (!check_is_number_automorphic(number))
//		{
//			number++;
//		}
//
//		numbers += to_string(number) + " ";
//		number++;
//	}
//
//	return numbers;
//}

// Recursion Realization
int count_digits(int number)
{
	if (number == 0)
	{
		return 0;
	}

	return 1 + count_digits(number / 10);
}

bool check_digits(int square_number, int number, int digit)
{
	if (digit <= 0)
	{
		return true;
	}

	return square_number % 10 == number % 10 
		&& check_digits(square_number / 10, number / 10, digit - 1);
}

bool check_is_number_automorphic(int number)
{
	long long square_number = (long long)number * number;
	int digit = count_digits(number);

	return check_digits(square_number, number, digit);
}

int calculate_automorphic_number(int n, int number)
{
	if (check_is_number_automorphic(number))
	{
		n--;
	}

	if (n <= 0)
	{
		return number;
	}

	return calculate_automorphic_number(n, number + 1);
}

string print_automorphic_numbers(int n)
{
	if (n <= 0)
	{
		return "";
	}

	string numbers = "";

	return print_automorphic_numbers(n - 1) + to_string(calculate_automorphic_number(n, 1)) + " ";
}