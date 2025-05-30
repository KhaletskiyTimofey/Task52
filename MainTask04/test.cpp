#include "test.h"

void test(string name, int* numbers, int size, int* expected)
{
	int actual = true;

	reverse(numbers, size);

	for (int i = 0; i < size; i++)
	{
		if (numbers[i] != expected[i])
		{
			actual = false;
		}
	}

	cout << name << ": " << (actual ? "PASS" : "FAIL") << endl;
}