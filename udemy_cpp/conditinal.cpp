#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str("There are two needles in this hoystal needle");
	string str2("needle");
	size_t found;

	found = str.find(str2);
	if(found != string::npos)
		cout << "first needle found at : " << int(found) << endl;
	found = str.find("needles",found+1);
	if(found != string::npos)
		cout << "second needle found at : " << int(found) << endl;
	return 0;	
}
