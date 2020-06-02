#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<char, int> U;

    string s = "harshith";

    for (char c : s)
        U[c]++;
}