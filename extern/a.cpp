#include "a.h"
#include <iostream>

using namespace std;

int main() {
	global = 0;
	global++;
	cout << global << endl;
	f();
	cout << global << endl;
	return 0;
}