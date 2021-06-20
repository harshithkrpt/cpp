#include<iostream>
#include<algorithm>
using namespace std;

bool linearSearch(int *arr,int n,int &index,int key) {
    for(int i=0;i<n;i++)
    {
        if(arr[i] == key) {
            index = i;
            return true;
        }
    }
    return false;
}

bool binarySearch(int *arr,int n,int &index,int key) {
    std::sort(arr,arr+n);
    int left = 0;
    int right = n-1;
    while(left <= right) {
        int middle = (left + right) / 2;
        if(arr[middle] == key) {
            index = middle;
            return true;
        }
        if(arr[middle] > key) {
            right = middle - 1;
        }
        else {
            left = middle + 1;
        }
    }

    return false;
}

int main()
{
    int n,key;
    cin >> n >> key;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    int index;
    if(binarySearch(a,n,index,key) != -1) {
        cout << "Found at Index " << index << endl;
        return 0;
    }
    else {
        cout << "Not Found " << endl;
    }

    return 0;
}