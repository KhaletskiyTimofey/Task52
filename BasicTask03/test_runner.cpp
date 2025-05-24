#include "test.h"

int main()
{
	test("Test01", 0, 0, true);
	test("Test02", 2452, 13, true);
	test("Test03", 1234567, 28, true);
	test("Test04", 10, 7, false);
	test("Test05", 10000, 1, true);
	test("Test06", 25, 7, true);
	test("Test07", 14327420, 23, true);
	test("Test08", 512641246, 1, false);
	test("Test09", -1, 7, false);
	test("Test10", 100, -3, false);

	return 0;
}