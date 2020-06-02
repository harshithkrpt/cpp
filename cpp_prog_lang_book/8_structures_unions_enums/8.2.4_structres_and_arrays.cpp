#include<iostream>

using namespace std;

struct Point {
	int x,y;
};

int main()
{
	Point points[3] {{1,2},{3,4},{5,6}};
	
	cout << points[2].x;

	return 0;
}
