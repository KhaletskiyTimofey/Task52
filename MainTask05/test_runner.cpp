#include "test.h"

int main()
{
	int numbers1[]{ 0, 1, 2 };
	int numbers2[]{ 1, 2, 1 };
	int numbers3[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int numbers4[]{ 1, 2, 3, 4, 5, 5, 4, 3, 2, 1 };
	int numbers5[]{ -1, -2, -3, -4 };
	int numbers6[]{ 3, 2, 3 };
	int numbers7[]{ 0, 0, 0, 0, 0 };
	int numbers8[]{ -3, -2, -1, 0, 1, 2, 3 };
	int numbers9[]{ 30, 29, 31 };
	int numbers10[]{ 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 };

	test("Test01", numbers1, 3, false);
	test("Test02", numbers2, 3, true);
	test("Test03", numbers3, 9, false);
	test("Test04", numbers4, 10, true);
	test("Test05", numbers5, 4, false);
	test("Test06", numbers6, 3, true);
	test("Test07", numbers7, 5, true);
	test("Test08", numbers8, 7, false);
	test("Test09", numbers9, 3, false);
	test("Test10", numbers10, 10, true);

	return 0;
}