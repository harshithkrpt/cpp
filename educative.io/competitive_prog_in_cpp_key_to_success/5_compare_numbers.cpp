#include <iostream>
#include <string>
using namespace std;

string remove_leading_zeroes(string s)
{
    string ret;
    bool leading_zero = true;
    for (char c : s)
    {
        if (c != '0')
            leading_zero = false;
        if (!leading_zero)
            ret += c;
    }
    return ret;
}

char compare_numbers(string A, string B)
{
    string a = remove_leading_zeroes(A);
    string b = remove_leading_zeroes(B);

    if (a.size() != b.size())
        return a.size() > b.size() ? 'A' : 'B';

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
            continue;
        return a[i] > b[i] ? 'A' : 'B';
    }

    return '=';
}

int main()
{

    cout << compare_numbers("6", "19") << "\n";
    cout << compare_numbers("23576", "0023534") << "\n";
    cout << compare_numbers("63", "0063") << "\n";

    return 0;
}