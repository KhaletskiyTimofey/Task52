#include "test.h"

void test(string name, int* numbers, int size, bool expected)
{
	cout << name << ": " << (is_palindrom(numbers, size) == expected ? "PASS" : "FAIL") << endl;
}