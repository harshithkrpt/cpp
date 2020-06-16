#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N = 6;
    int arr[N] = {6, 3, 5, 4, 1, 2};
    for (int i = 0; i < N; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < N; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// O(N^2) Time Complexity