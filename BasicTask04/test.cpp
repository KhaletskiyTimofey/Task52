#include "test.h"

void test(string name, double x, int n, double expected)
{
	double actual = f(x, n);

	cout << name << ": " << (actual == expected ? "PASS" : "FAIL") << endl;
}