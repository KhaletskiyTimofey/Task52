#include "test.h"

int main()
{
	test("Test01", 0, "");
	test("Test02", 1, "1 ");
	test("Test03", 2, "1 5 ");
	test("Test04", 3, "1 5 6 ");
	test("Test05", 4, "1 5 6 25 ");
	test("Test06", 5, "1 5 6 25 76 ");
	test("Test07", 6, "1 5 6 25 76 376 ");
	test("Test08", 7, "1 5 6 25 76 376 625 ");

	return 0;
}