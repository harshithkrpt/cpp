#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<climits>
using namespace std;


int main()
{
	// add [2,3] add [30,400] add [399,450] and intervals donot overlap 
	// and give me interval for 400 -> [399,450]
	set<pair<int,int>> s;
	s.insert({2,3});
	s.insert({10,20});
	s.insert({30,400});
	s.insert({401,450});

	int point = 1;
	auto it = s.upper_bound({point,INT_MAX});
	if(it == s.begin())
	{
		cout << "no" << endl;
		return 0;
	}
	it--;
	pair<int,int> current = *it;
	if(current.first <= point && current.second >= point)	
	{
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
	return 0;
}

