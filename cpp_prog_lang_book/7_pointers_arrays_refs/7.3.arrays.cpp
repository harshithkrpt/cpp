#include<iostream>
#include<vector>
using namespace std;

void f()
{
	int aa[10];
	aa[6] = 9;
	int x = aa[99];
	cout << x;
}

void f1(int n)
{
	int v1[n]; // error this must be a constant expression // not in my version of c++
	vector<int> v2(n); // ok 
}


int a1[10];  // 10 ints in static store

void f3()
{
	int a2[20]; // 20 ints on the stack
	int *p = new int[40]; // 40 ints on the free store
}




int main()
{
	f();
	f1(10);
	f3();
	int v1[] = {1,2,3,4};
	char v2[] = {'a','b','c',0};
	char v3[2] = {'a','b',0}; // error
	char v4[3] = {'a','b',0}; // ok
	int v5[8] = {1,2,3,4}; // [1,2,3,4,0,0,0,0]
	int v6[8] = v5; // error: cannot copy an array (cannot assign an int* to an array)
	v6 = v5; // error : no array assignment
	return 0;
}
