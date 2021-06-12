#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[6] = {1,2,3,4,5,6};

    int n = 6;

    for(int i=0;i<(n/2);i++) {
       int temp = a[i];
       a[i] = a[n-i-1];
       a[n-i-1] = temp;
    }

    
    return 0;
}