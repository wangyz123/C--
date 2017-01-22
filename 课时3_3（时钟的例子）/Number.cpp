#include "Number.h"
#include <iostream>

using namespace std;

Number::Number() : value(0)
{
}

Number::~Number()
{
}

int Number::get_value() {
	return value;
}

void Number::increase() {
	value++;
	bool ans = false;
	if (value == limit) {
		ans = true;
		value = 0;
		if (linked)
		{
			next->increase();
		}
	}
	return ans;
}

void Number::link(Number *a) {
	next = a;
	linked = true;
}

bool Number::set_value(int input) {
	if (0 <= input && input <= limit) {
		value = input;
		return true;
	}
	else return false;
}

