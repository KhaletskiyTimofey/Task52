#include "logic.h"

int main()
{
	string text;

	cout << "Enter random string: ";
	cin >> text;

	cout << "This string " << (is_english_string(text) ? "has" : "hasn't") 
		<< " got only English symbols, spaces and punctuation marks" << endl;

	return 0;
}