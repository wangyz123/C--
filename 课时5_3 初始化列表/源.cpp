#include <iostream>

using namespace std;
class B {
public:
	B(int i){}
	B() {}
};
class A {
private:
	int i;
	int *p;
	B b;
public:
	A() :p(0) { b = 0;  cout << "A::A() this = " << this << endl; }
	~A() { if (p) delete p; cout << "A::~A() this = " << this << " i = " << i << endl; }
	void set(int i) { this->i = i; }
	void f() { p = new int; }
	void g(A* q) { cout << "A::g(), q->i = " << q->i << endl; }
};

int main() {
	A* p = new A[10];
	for (int i = 0; i < 10; i++)
		p[i].set(i);

	A b;
	b.set(100);
	p[0].g(&b);
	delete[] p;
	return 0;
}

