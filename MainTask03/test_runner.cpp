#include "test.h"

int main()
{
	int numbers1[]{ 0, 1, 2 };
	int numbers2[]{ 1, 2, 3 };
	int numbers3[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int numbers4[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int numbers5[]{ -1, -2, -3, -4 };
	int numbers6[]{ 3, 2, 8 };
	int numbers7[]{ 0, 0, 0, 0, 0 };
	int numbers8[]{ 0, 1, -1, 2, -2, 3, -3 };
	int numbers9[]{ 30, 29, 31 };
	int numbers10[]{ 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 };

	test("Test01", numbers1, 3, 3);
	test("Test02", numbers2, 3, 6);
	test("Test03", numbers3, 9, 45);
	test("Test04", numbers4, 10, 55);
	test("Test05", numbers5, 4, -10);
	test("Test06", numbers6, 3, 13);
	test("Test07", numbers7, 5, 0);
	test("Test08", numbers8, 7, 0);
	test("Test09", numbers9, 3, 90);
	test("Test10", numbers10, 10, 100);

	return 0;
}