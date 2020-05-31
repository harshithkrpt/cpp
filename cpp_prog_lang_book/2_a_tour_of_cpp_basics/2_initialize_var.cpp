#include<iostream>
#include<vector>
#include<complex>
using namespace std;


int main()
{
	double d1 = 2.3;
	double d2 = {2.3};
	
	cout << d1 << d2;
	complex<double> z = 1; // a complex number with double precision floating pointer scalars
	complex<double> z2 {d1,d2};
	complex<double> z3 = {1,2}; // = is optimal with {...}
	
	vector<int> v{1,2,3,4,5,6};

	cout << "Complex" << z << z2 << z3;
	
	//int i1 = 7.2;
	//int i2 {7.2}; // Error Floating Point to interger Conversion
	//int i3 = {7.2}; // Error Floating Point to integer conversion (the = is redundand)
	// Deduction From Variable Initializer
	auto b = true;
	auto ch = 'x';
	auto i = 123;
	auto d = 1.2;
	auto z1 = sqrt(i); 
	return 0;
}
