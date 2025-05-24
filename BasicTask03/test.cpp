#include "test.h"

void test(string name, int number, int sum, bool expected)
{
	cout << name << ": " << (equals(number, sum) == expected ? "PASS" : "FAIL") << endl;
}