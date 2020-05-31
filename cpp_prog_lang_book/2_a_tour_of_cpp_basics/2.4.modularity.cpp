#include<iostream>
using namespace std;

/*
 * Interafces
 */

double square(double);


class Vector {
	public:
		Vector(int s);
		double &operator[](int i);
		int size();
	private:
		double *elem;
		int sz;
};

double square(double d) {
	return d * d;
}

Vector::Vector(int s)
	: elem {new double[s]},sz{s}
	{
	}

double& Vector::operator[](int s)
{
	return elem[s];
}

int Vector::size()
{
	return sz;
}

int main()
{

	cout << square(4);
	Vector n(10);
	cout << n.operator[](2);
	return 0;
}
