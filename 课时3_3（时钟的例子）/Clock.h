#pragma once
#include "Number.h"
#include <iostream>
using namespace std;
class Clock
{
public:
	Clock();
	~Clock();
	bool start(int hh, int mm, int ss);
	void start();
	void show();
private:
	Number hour;
	Number minute;
	Number second;
};

