#include "test.h"

void test(string name, int number, int expected)
{
	int actual = divs(number);

	cout << name << ": " << (actual == expected ? "PASS" : "FAIL") << endl;
}