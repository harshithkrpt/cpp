#include <bits/stdc++.h>

using namespace std;

// Put The Biggest Element on Right Side By Comparing Adjacent Elements
// Time Complexity O(N^2)
int main()
{
    int N = 6;
    int arr[6] = {6, 3, 5, 4, 1, 2};

    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j < N - i; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
        }
    }

    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";

    cout << "\n";

    return 0;
}