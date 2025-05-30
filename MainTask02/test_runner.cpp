#include "test.h"

int main()
{
	test("Test01", 1, 0);
	test("Test02", 2, 0);
	test("Test03", 3, 0);
	test("Test04", 4, 1);
	test("Test05", 20, 4);
	test("Test06", 17, 0);
	test("Test07", 100, 7);
	test("Test08", -1, 0);
	test("Test09", 60, 10);
	test("Test10", 8, 2);

	return 0;
}