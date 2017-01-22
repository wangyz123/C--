#include <stdio.h>

class A {
public:
	void f();
	A(int a);
	~A();
	int i;
};

struct B
{
	int i;
};

A::A(int a) {
	i = a;
	printf("A::A--this = %p\n", this);
}

A::~A() {
	printf("A::~A()\n");
}
void A::f() {
	this->i = 20;
	printf("A::f--&i = %p\n", &i);
	printf("this = %p\n", this);
}

void f(class A *p) {
	p->i = 20;
}
int main() {
	A a(1);
	a.i = 10;
	printf("&a = %p\n", &a);
	printf("&a.i = %p\n", &(a.i));
	A aa(2);
	a.f();
	printf("&aa = %p\n", &aa);
	aa.f();
	A bb;
	A y[2] = { A(1) };

} 