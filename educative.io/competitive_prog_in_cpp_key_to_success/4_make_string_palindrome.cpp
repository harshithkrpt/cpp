#include <iostream>
#include <vector>
#include <string>

using namespace std;

int make_palindrome(string s)
{
    int m = s.size();
    int actions = 0;
    for (int i = 0, j = m - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
            actions++;
    }

    return actions;
}

int main()
{
    string s;
    cin >> s;

    cout << make_palindrome(s);

    return 0;
}