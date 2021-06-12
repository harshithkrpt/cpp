#include<iostream>

using namespace std;

void pattern1(int row,int col) {
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int row,int col) {
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            if(i == 0 || i == (row-1) || j == 0 || j == (col-1)) {
                cout << "* ";
            } 
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void pattern3(int row) {
    for(int i=0;i<row;i++) {
        for(int j=0;j<row-i;j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern4(int row) {
    for(int i=row;i>=1;i--) {
        for(int j=0;j<=row-i;j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern5(int row) {
    for(int i=1;i<=row;i++) {
        for(int j=1;j<=row;j++) {
            if(j <= row-i) {
                cout << "  ";
            }
            else {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

void pattern6(int n) {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// Floyds triangle
void pattern7(int n) {
    int k = 1;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
}

// butterfly pattern
void pattern8(int n) {
    // Top  Side
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n;j++) {
                if(j <= i || j > (2 * n) - i) {
                    cout << "* ";
                }
                else {
                     cout << "  ";
                }
        }
        cout << endl;
    }


    // Bottom Side 
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n;j++) {
            if(j <= n-i+1 || j >= (2 * n) - (n - i)) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

}

// Above Pattern with different Logic
void pattern9(int n) {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++){
            cout << "* ";
        }
        
        for(int j=1;j<=(2*n)-(2 * i);j++) {
            cout << "  ";
        }
        for(int j=1;j<=i;j++) {
            cout << "* ";
        }   
        cout << endl;
    }

    for(int i=n;i>=1;i--) {
        for(int j=1;j<=i;j++){
            cout << "* ";
        }
        
        for(int j=1;j<=(2*n)-(2 * i);j++) {
            cout << "  ";
        }
        for(int j=1;j<=i;j++) {
            cout << "* ";
        }   
        cout << endl;
    }
}

void pattern10(int n) {
    for(int i=1;i<=n;i++) {

        for(int j=1;j<=n;j++) {
            if(j <= n+1-i) {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}


void pattern11(int n) {
    for(int i=1;i<=n;i++) {
        // int disp = 1;
        // // if(i % 2 == 0) {
        // //     disp = 0;
        // // }
        for(int j=1;j<=i;j++) {
            // if(j <= i)
            // {
            //     cout << disp << " ";
            //     disp = disp == 0 ? 1 : 0;
            // }
            if((i+j)%2 == 0) {
                cout << 1 << ' ';
            }
            else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}

// Rhombus Pattern
void pattern12(int n) {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=(2 * n)-i;j++) {
            if(j >= n+1-i) {
                cout << "* ";
            }
            else cout << "  "; 
        }
        cout << endl;
    }
}


// Number Pattern
// * * * 1 
// * * 1   2 
// * 1   2   3

void pattern13(int n) {
    for(int i=1;i<=n;i++) {
        // n + 1 - i spaces
        for(int j=1;j<=n-i;j++) {
            cout << " ";
        }
        for(int j=1;j<=i;j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int a,b,c;

    cin >> a >> b >> c;

    switch(c)
    {
        case 1:
            pattern1(a,b);
            break;
        case 2:
            pattern2(a,b);
            break;
        case 3:
            pattern3(a);
            break;
        case 4:
            pattern4(a);
            break;
        case 5:
            pattern5(a);
            break;
        case 6:
            pattern6(a);
            break;
        case 7:
            pattern7(a);
            break;
        case 8:
            pattern8(a);
            break;
        case 9:
            pattern9(a);
            break;
        case 10:
            pattern10(a);
            break;
        case 11:
            pattern11(a);
            break;
        case 12:
            pattern12(a);
        case 13:
            pattern13(a);
        default:
            break;
    }
        


    return 0;
}