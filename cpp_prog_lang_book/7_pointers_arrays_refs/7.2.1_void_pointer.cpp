#include<iostream>
using namespace std;

void f(int∗ pi)
{
	void∗ pv = pi; // ok: implicit conversion of int* to void*
	∗pv;// error : can’t dereference void*
	++pv;// error : can’t increment void* (the size of the object pointed to is unknown)
	int∗ pi2 = static_cast<int∗>(pv); // explicit conversion back to int*
	double∗ pd1 = pv;
	double∗ pd2 = pi;
	double∗ pd3 = static_cast<double∗>(pv); // error
// error
// unsafe (§11.5.2)
}

int main()
{
	// void * - pointer to an object of unknown type
	// except pointer to a function or pointer to a member cannot
	return 0;
}
