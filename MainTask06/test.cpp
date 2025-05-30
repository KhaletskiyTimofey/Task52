#include "test.h"

void test(string name, int n, string expected)
{
	cout << name << ": " << (print_automorphic_numbers(n) == expected ? "PASS" : "FAIL") << endl;
}