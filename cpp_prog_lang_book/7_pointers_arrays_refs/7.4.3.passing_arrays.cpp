#include <iostream>
using namespace std;

void comp(double b[10])
{
	for (int i = 0; i != 10; i++)
		b[i] += 99;
}

void f()
{
	double a1[10];
	double a2[5];
	double a3[100];

	comp(a1);
	comp(a2); // disaster
	comp(a3); // uses only the first 10 elements
};

void comp2(double *b)
{
	for (int i = 0; i != 10; ++i)
		b[i] += 99;
}

// m[][] as argument is error:
/*void print_mi(int m[][], int dim1, int dim2)
{
	for (int i = 0; i != dim1; ++i)
	{
		for (int j = 0; j != dim2; ++j)
		{
			cout << m[i][j] << "\t";
		}
		cout << "\n";
	}
}
*/

void print_mi(int *m, int d1, int d2)
{
	for (int i = 0; i != d1; i++)
	{
		for (int j = 0; j != d2; j++)
		{
			cout << m[i * d2 + j] << "\t";
		}
	}
}

int test()
{
	int v[3][5] = {
		{0, 1, 2, 3, 4}, {10, 11, 12, 13, 14}, {20, 21, 22, 23, 24}};

	print_mi(&v[0][0], 3, 5);
}

int main()
{
	test();
	return 0;
}
