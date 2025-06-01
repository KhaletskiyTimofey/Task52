#include "logic.h"

int main()
{
	int rings_count;

	cout << "Enter count of rings: ";
	cin >> rings_count;

	cout << hanoi(rings_count, 'A', 'B', 'C') << endl;

	return 0;
}