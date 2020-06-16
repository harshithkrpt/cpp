/* 
 *  Merge Sort Uses Divide and Conquer technique
 *      Time Complexity : O(NlogN)
 */
#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    int sz1 = mid - start + 1;
    int sz2 = end - mid;

    int L[sz1], R[sz2]; // two temp arrays

    for (int i = 0; i < sz1; i++)
        L[i] = arr[i + start];

    for (int i = 0; i < sz2; i++)
        R[i] = arr[i + mid + 1];

    int l = 0, r = 0, a = start;

    while (l < sz1 && r < sz2)
    {
        if (L[l] < R[r])
        {
            arr[a++] = L[l++];
        }
        else
        {
            arr[a++] = R[r++];
        }
    }

    // copy the remaining elements
    while (l < sz1)
        arr[a++] = L[l++];
    while (r < sz2)
        arr[a++] = R[r++];
}

void merge_sort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;

    merge_sort(arr, start, mid);
    merge_sort(arr, mid + 1, end);

    // merge the sorted arrays
    merge(arr, start, mid, end);
}

int main()
{
    int N = 8;
    int arr[N] = {6, 3, 5, 1, 4, 8, 2, 7};

    merge_sort(arr, 0, N - 1);

    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
}