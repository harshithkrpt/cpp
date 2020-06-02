#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool f(int x, int y)
{
    return x > y;
}

int main()
{
    vector<int> A = {11, 3, 4, 40};
    sort(A.begin(), A.end());                            // O(NlogN)
    bool present = binary_search(A.begin(), A.end(), 3); // true
    present = binary_search(A.begin(), A.end(), 13);     // false
    A.push_back(100);
    present = binary_search(A.begin(), A.end(), 13); // true

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    // Lower Bound
    auto it = lower_bound(A.begin(), A.end(), 100);                   // first element >= (inclusion)
    vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100); // first element > (exclusion)

    cout << *it << " " << *it2 << endl;
    cout << it2 - it << endl; // 4 o(1)

    sort(A.begin(), A.end(), f);

    vector<int>::iterator it3;

    for (it3 = A.begin(); it3 != A.end(); it3++)
    {
        cout << *it3 << " ";
    }
    cout << endl;

    // Reference
    for (int &x : A)
    {
        x++;
        cout << x << ' ';
    }
    cout << endl;
}