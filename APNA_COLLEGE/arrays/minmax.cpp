#include<iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    int maxNum = INT_MIN;
    int minNum = INT_MAX;
    for(int i=0;i<n;i++)
    {
        maxNum = max(maxNum,a[i]);
        minNum = min(minNum,a[i]);
    }

    cout << "Max : " << maxNum << "\n";
    cout << "Min : " << minNum << "\n";

    return 0;
}