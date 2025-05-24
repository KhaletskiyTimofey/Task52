#include "test.h"

int main()
{
	test("Test01", 0, 5, 0);
	test("Test02", 2, 0, 1);
	test("Test03", 2, 3, 8);
	test("Test04", 12, 2, 144);
	test("Test05", -13, 2, 169);
	test("Test06", -2, 3, -8);
	test("Test07", 10, 3, 1000);
	test("Test08", 20, 3, 8000);
	test("Test09", -1, 7, -1);
	test("Test10", 100, 3, 1'000'000);

	return 0;
}