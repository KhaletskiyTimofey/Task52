#include "logic.h"

// Loop Realization
//bool is_palindrom(string input_string)
//{
//	if (input_string == "")
//	{
//		return false;
//	}
//
//	int length = input_string.length();
//	int half_length = (length + 1) / 2;
//
//	for (int i = 0; i < length; i++)
//	{
//		if (input_string[i] != input_string[length - 1 - i])
//		{
//			return false;
//		}
//	}
//
//	return true;
//}

// Recursion Realization
bool is_the_same_symbols(string input_string, int i)
{
	int length = input_string.length();
	int half_length = (length + 1) / 2;

	if (i > half_length)
	{
		return true;
	}

	bool is_symbol_the_same = true;
	bool is_last_symbol_the_same = is_the_same_symbols(input_string, i + 1);

	if (input_string[i] != input_string[length - 1 - i])
	{
		is_symbol_the_same = false;
	}

	return is_last_symbol_the_same && is_symbol_the_same;
}

bool is_palindrom(string input_string)
{
	if (input_string == "")
	{
		return false;
	}

	return is_the_same_symbols(input_string, 0);
}