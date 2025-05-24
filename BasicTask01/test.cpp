#include "test.h"

void test(string name, int number, int expected)
{
	int actual = count_digits(number);

	cout << name << ": " << (actual == expected ? "PASS" : "FAIL") << endl;
}