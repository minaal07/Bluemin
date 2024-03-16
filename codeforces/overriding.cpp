#include <bits/stdc++.h>
using namespace std;

class base {
public:
	virtual void print()=0;
	virtual void show() { cout << "show base class" << endl; }
};

class derived : public base {
public:
	void print() { cout << "print derived class" << endl; }

	void show() { cout << "show derived class" << endl; }
};

int main()
{
	base* bptr;
	derived d;
	bptr = &d;

	bptr->print();
	bptr->base::show();

	return 0;
}
