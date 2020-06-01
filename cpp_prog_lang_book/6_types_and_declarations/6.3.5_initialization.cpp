#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int a1 {2}; // C++11 Feature creator recommends
	int a2 = {2};
	int a3 = 3;
	int a4(3);
	
	// {} does not allow narrowing
	// char to int is allowed but not int to char
	// float to double allowed but not double to float
	// float cannot be converted to an integer
	// int cannot to a floating-point	
	
	// prefer auto and =			
	
	vector<int> v1 {99}; // v1 is a vector of 1 element with the value hello
	vector<int> v2(99); // v2 is a vector of 99 elements with default 0
	

	return 0;
}
