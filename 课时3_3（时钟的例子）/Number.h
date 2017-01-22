#pragma once
#include <iostream>

using namespace
class Number
{
public:
	Number();
	~Number();
	bool set_value(int input);
	int get_value();
	void increase();
	bool linked = false;
	void link(Number* next);
private:
	int limit;
	int value;
	Number *next;
};

