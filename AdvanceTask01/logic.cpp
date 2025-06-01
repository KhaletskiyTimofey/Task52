#include "logic.h"

string get_transition(char this_stick, char next_stick)
{
	string transition = "";

	transition += this_stick;
	transition += " --> ";
	transition += next_stick;
	transition += "\n";

	return transition;
}

string hanoi(int rings_count, char main_stick, char target_stick, char free_stick)
{
	if (rings_count <= 0)
	{
		return "Incorrect rings count!";
	}

	if (rings_count == 1)
	{
		return get_transition(main_stick, target_stick);
	}

	return hanoi(rings_count - 1, main_stick, free_stick, target_stick)
		+ get_transition(main_stick, target_stick)
		+ hanoi(rings_count - 1, free_stick, target_stick, main_stick);
}