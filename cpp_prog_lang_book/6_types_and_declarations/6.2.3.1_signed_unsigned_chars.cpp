#include<iostream>

using namespace std;

void f(char c,signed char sc,unsigned char uc){
/*	char *pc  = &uc; // error
	signed char * psc = pc; // error
	unsigned char *puc = pc; // error
	psc = pus;
*/
}

// assigning too large values to signed values is undefined

void g(char c,signed char sc,unsigned char uc)
{
	c = 255; // if plain char are signed and have 8 bits
	c = sc; // ok
	sc = uc; // implementation-defined if plain chars are signed and if uc’s value is too large
	uc = sc; // ok 
	sc = c; // implementation-defined if plain chars are unsigned and if c’s value is too large
	uc = c; // ok
}

int main()
{

	signed char sc = -160;
	unsigned char uc = sc; // uc == 116 (256-116)
	cout << uc; 

	char count[256];
	++count[sc]; 
	++count[uc]; 
	return 0;
}
