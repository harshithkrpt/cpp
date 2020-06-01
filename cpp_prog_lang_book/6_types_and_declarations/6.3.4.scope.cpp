#include<iostream>
using namespace std;

int x;
void f()
{
	int x=1;
	::x = 3;
	cout << ::x;
	cout << x;
}

// error if variable defined twice in the same scope

int main()
{
	f();
	return 0;
}
