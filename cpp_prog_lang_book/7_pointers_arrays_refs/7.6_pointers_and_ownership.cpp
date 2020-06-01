#include<iostream>

using namespace std;

int global[7];

void confused(int *p) {
	// delete p
} 

int main()
{	
	int *pn = new int[7];
	int i {7};
	int q = &i;
	confused(pn);
	confused(q);
	confused(&global);
	return 0;
}
