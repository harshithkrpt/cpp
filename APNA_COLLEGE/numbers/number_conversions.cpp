#include<iostream>
#include<math.h>

using namespace std;

int getDecimal(string number,int conversion) {
    int dec = 0;
    int powerToMultiply = 0;

    if(conversion == 16) {
        for(int i=number.length()-1;i>=0;i--) {
        int num;
        if(number[i] == 'a' ||  
           number[i] == 'b' || 
           number[i] == 'c' || 
           number[i] == 'd' || 
           number[i] == 'e' || 
           number[i] == 'f') {
           num = number[i] - 87;
        } 
        else  num =  number[i] - '0';
        
        dec += num * pow(conversion,powerToMultiply);
        powerToMultiply++;
        }
    }
    else {
        for(int i=number.length()-1;i>=0;i--) {
        int num = number[i] - '0';
        dec += num * pow(conversion,powerToMultiply);
        powerToMultiply++;
        }
    }
    
    return dec;
}

string decimalToBinary(int dec)
{   
    string ans = "";
    while(dec) {
        int num = dec % 2;
        if(num == 0) {
            ans = "0" + ans;
        }
        else {
            ans = "1" + ans;
        }
        dec /= 2;
    }

    return ans;
}

/*
    Below Code
    8 | 10 | 1
        8
      ------
    4 | 2  | 0
        0
      ------
    2 |  2  | 1
         0
      ------
    1 |   0 | 0
          0
    0  |     |
*/      

int decimalToBinary2(int dec)
{
    int n = 1;
    while(n <= dec) 
        n *= 2;
    n /= 2;

    int ans = 0;

    while(n > 0) {
        int lastDigit = dec / n;
        dec -= lastDigit * n;
        n /=2;
        ans = ans * 10 + lastDigit;
    }

    return ans;
}

int decimalToOctal(int dec)
{
    int n = 1;
    while(n <= dec) 
        n *= 8;
    n /= 8;

    int ans = 0;

    while(n > 0) {
        int lastDigit = dec / n;
        dec -= lastDigit * n;
        n /=8;
        ans = ans * 10 + lastDigit;
    }

    return ans;
}


string decimalToHexaDecimal(int dec) {
    int n = 1;
    string ans = "";

    while(n <= dec) 
        n *= 16;
    n /= 16;

    while(n > 0)
    {
        int lastDigit = dec / n;
        dec -= lastDigit * n;
        n /= 16;

        if(lastDigit <= 9)
        {
            ans = ans + to_string(lastDigit);
        }
        else
        {
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main()
{
    // Get number Input
    int number;
    cin >> number;

    // cout << getDecimal(number,2);
    // cout << getDecimal(number,8);
    // cout << getDecimal(number,16);
    cout << decimalToHexaDecimal(number);
    return 0;
}