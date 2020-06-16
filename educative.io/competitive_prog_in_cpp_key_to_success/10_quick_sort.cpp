/* 
 *  Divide and Conquer
 *  Pivot 
 *  Time Complexity Worst Case O(N^2) Avg Case O(NlogN)
 */
#include <iostream>

using namespace std;

int partition(int arr[], int s, int e)
{
    int i = s + 1;
    int j = s + 1;

    int pivot = s;

    while (j <= e)
    {
        if (arr[j] < arr[pivot])
        {
            swap(arr[j], arr[i]);
            i++;
        }
        j++;
    }
    swap(arr[pivot], arr[i - 1]);
    return i - 1;
}

void quick_sort(int arr[], int s, int e)
{
    if (s >= e)
        return;

    int p = partition(arr, s, e);

    quick_sort(arr, s, p - 1);
    quick_sort(arr, p + 1, e);
}

int main()
{
    int N = 8;
    int arr[N] = {6, 3, 5, 1, 4, 8, 2, 7};

    quick_sort(arr, 0, N - 1);

    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";

    return 0;
}