#include <bits/stdc++.h>
using namespace std;

void min_heapify_bottom_up(int arr[], int N, int idx)
{
    if (idx == 0)
        return;
    int parent = (idx - 1) / 2;
    if (arr[parent] > arr[idx])
    {
        swap(arr[parent], arr[idx]);
    }
    min_heapify_bottom_up(arr, N, parent);
}

void build_heap(int arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        min_heapify_bottom_up(arr, N, i);
    }
}

void min_heapify(vector<int> &arr, int idx)
{
    int N = arr.size();
    if (idx >= N)
        return;

    int left = 2 * idx + 1;
    int right = 2 * idx + 2;
    int smallest = idx;

    if (left < N and arr[left] < arr[smallest])
        smallest = left;
    if (right < N and arr[right] < arr[smallest])
        smallest = right;

    if (smallest != idx)
    { // Case 2 and 3
        swap(arr[idx], arr[smallest]);
        min_heapify(arr, smallest);
    }
}

int pop(vector<int> &arr)
{
    int root = arr[0];
    int N = arr.size();

    swap(arr[0], arr[N - 1]);
    arr.pop_back();
    min_heapify(arr, 0);

    return root;
}

int main()
{
    srand(time(NULL));
    int N = 10;
    int arr[N];
    for (int i = 0; i < N; i++)
        arr[i] = rand() % 32 + 1;

    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << "\n";
    build_heap(arr, N);
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}