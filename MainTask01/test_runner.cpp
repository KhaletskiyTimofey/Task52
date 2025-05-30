#include "test.h"

int main()
{
	test("Test01", "", false);
	test("Test02", "12", false);
	test("Test03", "123", false);
	test("Test04", "12341", false);
	test("Test05", "abccdcba", false);
	test("Test06", "abcdcba", true);
	test("Test07", "12321", true);
	test("Test08", " . . ", true);
	test("Test09", "abcABCCBAcba", true);
	test("Test10", "11", true);

	return 0;
}