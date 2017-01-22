#include <iostream>

using namespace std;

class A {
private:
	int i;
	int *p;
public:
	A() { p = 0; cout << "A::A() this = " << this << endl; }
	~A() { if (p) delete p; cout << "A::~A() this = " << this << " i = " << i << endl; }
	void set(int i) { this->i = i; }
	void f() { p = new int; }
};

int main() {
	A* p = new A[10];
	for (int i = 0; i < 10; i++) {
		p[i].set(i);
	}
	delete[] p;
	return 0;
}
