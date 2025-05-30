#include "test.h"

void test(string name, int* numbers, int size, int expected)
{
	int actual = sum_of_elements(numbers, size);

	cout << name << ": " << (actual == expected ? "PASS" : "FAIL") << endl;
}