#include<iostream>
using namespace std;

void copy_fct()
{
	int v1[10] = {0,1,2,3,4,5,6,7,8,9};
	int v2[10];
	for(auto i=0;i!=10;i++)
		v2[i] = v1[i];
}

void print()
{
	int v[] = {0,1,2,3,4,5,6,7,8,9};
	for(auto x:v) 
		cout << x << '\n';
	for(auto x:{70,3702,37,72,27392})
		cout << x << '\n';
}

void increment()
{
	int v[] = {0,1,2,3,4,5};
	for(auto &x: v) // &x reference to  
		++x;
	for(auto i:v)
		cout << i << "\n\n";
}

int count_x(char *p,char x)
{
	if(p==nullptr) return 0;
	int count = 0;
	for(;*p!=0;p++)
		if(*p == x)
			++count;
	return count;
}

int main()
{
	char v[6]; // array of 6 characters
	//char *p; // pointer to character
	// a pointer variable can hold the address of the object
	char *p = &v[3]; // p points to v's 4th element
	char x = *p; // *p is the object that p points to
	
	copy_fct();
	print();
	increment();
	count_x([1,2,3],1);

	// nullptr is a pointer that is shared by all pointer types
	double *pd = nullptr;
	int *lst = nullptr;
	//int pt = nullptr; // Error
	return 0;
}

