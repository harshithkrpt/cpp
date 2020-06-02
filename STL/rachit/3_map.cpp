#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    // MAP is Key Value Pairs
    map<int, int> A;
    A[1] = 100;
    A[2] = -1;
    A[3] = 200;
    A[1008796] = 1;

    map<char, int> cnt;
    string x = "harshith";
    for (char c : x)
    {
        cnt[c]++;
    }

    cout << cnt['h'] << cnt['p'] << endl;

    return 0;
}