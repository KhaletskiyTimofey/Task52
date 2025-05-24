#include "test.h"

int main()
{
	test("Test01", 1, 1, 1);
	test("Test02", 3, 1, 3);
	test("Test03", 4, 2, 8);
	test("Test04", 10, 4, 2500);
	test("Test05", 8, 2, 32);
	test("Test06", 20, 2, 200);
	test("Test07", 12, 2, 72);
	test("Test08", 12, -2, 0);

	return 0;
}