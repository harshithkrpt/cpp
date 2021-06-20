#include<iostream>

using namespace std;

void selectionSort(int *a,int n) {
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i] > a[j]) {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp; 
            }
        }
    }
}


void bubbleSort(int *a,int n) {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void insertionSort(int *a,int n) {
    for(int i=1;i<n;i++)
    {
        // Storing Temp Variable
        int current = a[i];
        int j = i-1;
        while(j >= 0 && a[j] > current) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = current;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    // selectionSort(a,n);
    // bubbleSort(a,n);
    insertionSort(a,n);

    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;


    return 0;
}