#include "test.h"

void test(string name, string input_string, bool expected)
{
	cout << name << ": " << (is_palindrom(input_string) == expected ? "PASS" : "FAIL") << endl;
}