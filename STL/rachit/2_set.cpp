#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    set<int> S;
    // Set internally maintains ascending order sequence
    S.insert(1); // logN
    S.insert(2);
    S.insert(-1);
    S.insert(-10);

    for (int x : S)
    {
        cout << x << " ";
    }
    cout << endl;

    auto it = S.find(-1);

    if (it == S.end())
    {
        cout << "No";
    }
    else
    {
        cout << "Yes" << *it;
    }

    auto it2 = S.lower_bound(-1); // >= -1
    auto it3 = S.upper_bound(-1); // > -1

    cout << *it2 << " " << *it3 << endl;

    auto it4 = S.upper_bound(2);
    if (it4 == S.end())
    {
        cout << "No";
    }
    else
    {
        cout << "Yes" << *it;
    }
    return 0;
}
