#include<iostream>

using namespace std;

void f()
{
	int val = 1;
	int &r {val}; //r and var now refer to the same int
	int x = r; // x becomes 1
	r = 2;
	cout << "val" << val;
}

/*
 *	Reference must be initialized to something 
 *
 * */

void g()
{
	int var = 0;
	int &r {var};
	//int &r2; // error initializer missing
	extern int& r3; // ok r3 initialized elsewhere
}

int h()
{
	int var = 0;
	int &rr {var};
	++rr; // var incremented by 1
	int *pp = &rr; // pp points to var
	cout << "*pp " << *pp << " *(&rr)" << *(&rr) << " var " << var;
	return 0;
}

int main()
{
	f();
	g();
	h();
	return 0;
}
