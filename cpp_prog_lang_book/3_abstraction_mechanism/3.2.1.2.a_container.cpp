#include<iostream>
using namespace std;
// A Container is a Object Holding a collection of elements
class Vector {
	private:
		double *elem;
		int sz;
	public:
		Vector(int s): elem{new double[s]},sz{s}
		{
			for(int i=0;i!=s;i++) elem[i] = 0;
		}
		


		~Vector() {delete[] elem;}

		double& operator[](int i);
		int size() const;
};


void fct(int n)
{
	Vector v(n);

	// Use V
	cout << "Using V";	
	{
 		Vector v2(2*n);
		// use v and v2
		cout << "Using V2";
	}
	cout << "Killing V2";
	// Use V
} // V is Destroyed here


int main()
{
	fct(5);
	return 0;
}
