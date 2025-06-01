#include "logic.h"

bool check_symbol(char symbol, int i)
{
	const int symbols_size = 39;

	if (i == symbols_size)
	{
		return false;
	}

	char symbols[]{ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
		' ', '.', ',', ':', ';', '"', '\'', '-', '(', ')', '?', '!', '/' };

	return check_symbol(symbol, i + 1) || symbol == symbols[i];
}

bool check_symbols(string text, int i)
{
	if (i == text.length())
	{
		return true;
	}

	return check_symbols(text, i + 1) && check_symbol(text[i], 0);
}

bool is_english_string(string text)
{
	return check_symbols(text, 0);
}