#include "logic.h"

// Loop Realization
//double f(double x, int n)
//{
//	if (n <= 0)
//	{
//		return 0;
//	}
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
//	return result / n;
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

double f(double x, int n)
{
	if (n <= 0)
	{
		return 0;
	}

	return power(x, n) / n;
}