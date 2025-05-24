#include "logic.h"

// Loop Realization
//int power(int x, int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//
//	int result = x;
//
//	for (int i = 1; i < n; i++)
//	{
//		result *= x;
//	}
//
//	return result;
//}

// Recursion Realization
double power(double x, int n)
{
	if (n == 0)
	{
		return 1;
	}

	return power(x, n - 1) * x;
}