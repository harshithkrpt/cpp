#include<iostream>

using namespace std;



int main()
{
	string var {"Cambridge"};
	string f();

	string &r1 {var};// ok
//	string &r2 {f()};// error
	//string &r3 {"Princeton"};// error

	//string && rr1 {f()}; // r value 
//	string && rr2 {var}; //error
	string && rr3{"O"};


	return 0;
}
