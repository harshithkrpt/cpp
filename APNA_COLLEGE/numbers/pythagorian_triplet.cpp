#include<iostream>
#include<math.h>

using namespace std;

int getMax(int a,int b,int c) {
    if(a>b && a>c) return a;
    else if(b>a && b>c) return b;
    return c;
}

bool isPythogorian(int a,int b,int c) {
    int max = getMax(a,b,c);
    if(max == a) {
        return pow(a,2) == (pow(b,2) + pow(c,2));
    }
    if(max == b) {
        return pow(b,2) == (pow(a,2) + pow(c,2));
    }
    if(max == c) {
        return pow(c,2) == (pow(b,2) + pow(a,2));
    }

    return false;
}

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    if(a == b || b == c || c == a) {
        cout << "False";
        return 0;
    }

    cout << isPythogorian(a,b,c);

    return 0;
}