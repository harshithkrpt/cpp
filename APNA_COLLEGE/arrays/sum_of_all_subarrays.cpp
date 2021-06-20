#include<iostream>
#include<cmath>

using namespace std;

void sumOfAllSubArrays(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            sum += a[j];
            cout << sum << " "; 
        }
    }
    return;
}


void recordBreakingDay(int *a,int n)
{
    int ans = 0;
    int max = 0;

    if(n == 1) {
        cout << 1 << " ";
        return; 
    }

    for(int i=0;i<n;i++)
    {
        if(i == 0 && a[i] > a[i+1])
        {
            ans++;
            max = a[i];
        }
        else if(i == n-1 && a[i] < a[i-1] && a[i] > max)
        {
            ans++;
        }  
        else if((a[i] > a[i+1]) && (a[i] > a[i-1]) && a[i] > max){
            ans++;
            max = a[i];
        }
    }

    cout << ans;
}


void longestArithmeticSubArray(int *a,int n)
{
    int ar[n-1];
    for(int i=0;i<n-1;i++) {
        ar[i] = abs(a[i+1] - a[i]);
    }


    int prev = ar[0];
    int maxi = 1;
    int count = 1;
    for(int i=1;i<n-1;i++)
    {
            if(ar[i] == prev) {
                count++;
                maxi = max(count,maxi);
            }
            else {
                prev = ar[i];
                count = 1;
            }
    }

    cout << (maxi + 1);
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

    // sumOfAllSubArrays(a,n);
    // longestArithmeticSubArray(a,n);
    recordBreakingDay(a,n);
    return 0;
}