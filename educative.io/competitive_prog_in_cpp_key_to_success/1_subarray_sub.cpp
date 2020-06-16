// Given an array, AAA, of NNN integers, answer QQQ queries of the type (l,r)(l, r)(l,r) - sum of the elements in the subarray A[l...r]A[l...r]A[l...r]. Print the sum for each query.

// Optimization to keep track of prefix sum O(N+Q)
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    vector<int> sum(N);
    sum[0] = A[0];
    for (int i = 1; i < N; i++)
        sum[i] = sum[i - 1] + A[i];

    for (int i = 0; i < Q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        int ans = sum[r];
        if (l > 0)
        {
            ans -= sum[l - 1];
        }

        cout << ans << " ";
    }

    return 0;
}