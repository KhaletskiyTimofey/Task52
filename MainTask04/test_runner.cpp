#include "test.h"

int main()
{
	int numbers1[]{ 0, 1, 2 };
	int expected_numbers1[]{ 2, 1, 0 };
	int numbers2[]{ 1, 2, 3 };
	int expected_numbers2[]{ 3, 2, 1 };
	int numbers3[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int expected_numbers3[]{ 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int numbers4[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int expected_numbers4[]{ 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int numbers5[]{ -1, -2, -3, -4 };
	int expected_numbers5[]{ -4, -3, -2, -1 };
	int numbers6[]{ 3, 2, 8 };
	int expected_numbers6[]{ 8, 2, 3 };
	int numbers7[]{ 0, 0, 0, 0, 0 };
	int expected_numbers7[]{ 0, 0, 0, 0, 0 };
	int numbers8[]{ 0, 1, -1, 2, -2, 3, -3 };
	int expected_numbers8[]{ -3, 3, -2, 2, -1, 1, 0 };
	int numbers9[]{ 30, 29, 31 };
	int expected_numbers9[]{ 31, 29, 30 };
	int numbers10[]{ 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 };
	int expected_numbers10[]{ 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 };

	test("Test01", numbers1, 3, expected_numbers1);
	test("Test02", numbers2, 3, expected_numbers2);
	test("Test03", numbers3, 9, expected_numbers3);
	test("Test04", numbers4, 10, expected_numbers4);
	test("Test05", numbers5, 4, expected_numbers5);
	test("Test06", numbers6, 3, expected_numbers6);
	test("Test07", numbers7, 5, expected_numbers7);
	test("Test08", numbers8, 7, expected_numbers8);
	test("Test09", numbers9, 3, expected_numbers9);
	test("Test10", numbers10, 10, expected_numbers10);

	return 0;
}