#include<iostream>
#include<vector>

using namespace std;

/*
 *	A struct is simply a class where members are public by default
 *	struct can have member function
 *	struct can have constructors 
 * */

struct Point {
	int x,y;
};

struct Points {
	vector<Point> elem;
	Points(Point p0) { elem.push_back(p0);}
	Points(Point p0,Point p1) { elem.push_back(p0); elem.push_back(p1); }
};

int main()
{
	Points x1 {{100,200}};
	Points x2 {{100,200},{300,400}};
	return 0;
}
