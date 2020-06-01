#include<iostream>
using namespace std;

const char *p = "hello";
const char *q = "hello";

void g()
{
	if(p == q) cout << "One!\n";
}


int main()
{
	cout << sizeof("Hello");
	g();
	// type of "Hello" is const char [6];
	char alpha[] = "abcdefghijklmnopqrstuvwxyz"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	return 0;
}
