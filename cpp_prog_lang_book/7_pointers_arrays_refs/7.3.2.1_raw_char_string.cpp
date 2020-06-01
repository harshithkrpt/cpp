#include<iostream>

using namespace std;

int main()
{
	string s = R"("Hello World")";
	string s2 = R"****(***(Hello)***)****";
	string s3 = R"(
	Harshith
	is My Name
)";
	cout << s << "\n" << s2 << s3;
	return 0;
}
