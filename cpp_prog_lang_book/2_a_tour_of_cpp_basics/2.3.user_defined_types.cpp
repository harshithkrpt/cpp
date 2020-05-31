#include <iostream>
using namespace std;

struct Vector {
	int sz; // number of elements
	double *elem; // pointer to elements
};

void vector_init(Vector &v,int s)
{
	v.elem = new double[s];
	v.sz = s;
}

double read_and_sum(int s)
{
	Vector v;
	vector_init(v,s); // allocates s elements for v
	for(int i=0;i!=s;i++)
		cin >> v.elem[i];
	double sum = 0;
	for(int i=0;i!=s;++i)
		sum += v.elem[i]; // take the sum of the elements
	return sum;
}

void f(Vector v,Vector &rv,Vector *pv)
{
	int i1 = v.sz; // access through name
	int i2 = rv.sz; // access through reference 
	int i4 = pv->sz; // access through pointer
}

int main()
{
	cout << read_and_sum(5);	
	return 0;
}

