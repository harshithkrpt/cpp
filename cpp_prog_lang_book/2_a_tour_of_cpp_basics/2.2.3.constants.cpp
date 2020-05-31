#include<iostream>
#include<bits/stdc++.h>
using namespace std;

constexpr double square(double x) {
	return x * x;
}

int main() {

	cout << "_________________Hello C++_________________";
	// 2 notations of immutability
	// const and constexpr
	
	const int dmv = 17; // dmv is a named constant
	int var = 17;
	constexpr double max1 =	1.4 * square(dmv); // OK At Compile Time  
//	constexpr double max2 = 1.4 * square(var); // Error Var is not constant
	const double max3 = 1.4 * square(var); // OK evaluated at run time
	return 0;
}
