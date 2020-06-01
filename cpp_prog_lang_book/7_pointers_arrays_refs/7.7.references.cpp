#include<iostream>

using namespace std;


/*
 *
 *	A Reference is a alias to a object like pointer
 *	syntax does not change unlike pointers
 *	a reference always  refers to the object to which it was initialized
 *	there is no null reference
 *	
 *	lvalue reference to refer to objects whose value we want to change
 *	const reference is objects we do not want to change
 *	rvalue reference is objects whose value we do not need to preserve after we have used it (ex: temporaty)
 *
 * */

template<class T>

class vector {
	T *elem;
	public:
		T& operator[](int i){return elem[i];} // return reference to element
		const T& operator[](int i) const {return elem[i];} // return reference to const element 
		void push_back(const T&a); // pass element to be added by reference
};

void f(const vector<double> &v)
{
	double d1 = v[1]; // copy the value of the double refered to by v.operator[](1) into d1;
	v[2] = 7; // place 7 in the double referred to by the result of v.operator[](2)
	v.push_back(d1); 
}

int main(){

	return 0;
}
