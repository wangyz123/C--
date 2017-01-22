#include "Clock.h"
#include <iostream>
#include <windows.h>
using namespace std;

Clock::Clock() {

}

Clock::~Clock()
{
}

void Clock::start() {
	start(0, 0, 0);
}
void start() {
	start(0, 0, 0);
}
bool Clock::start(int hh, int mm, int ss) {
	Clock::second.link(&minute);
	Clock::minute.link(&hour);
	if (hour.set_value(hh) && minute.set_value(mm) && second.set_value(ss));
	else return false;

	while (true) {
		Sleep(1000);
		second.increase();
		show();
	}

	return true;
}

void Clock::show() {
	cout << hour.get_value() << ":" << minute.get_value() << ":" << second.get_value() << endl;
}