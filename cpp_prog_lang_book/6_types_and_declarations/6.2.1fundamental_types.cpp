#include<iostream>
#include<vector>

using namespace std;

/*
 *   	boolean char --- integral types
 *      floating amd integral --- arithmetic types
 * 	enum and classes --- user defined types
 * 	fundamental types,pointers and references --- built-in-types
 *
*/


void intval()
{
	for(char c;cin >> c;)
		cout  << "the value of " << c << "is" << int(c) << "\n";
}

void digits()
{
	for(int i=0;i!=10;i++)
		cout << static_cast<char>('0'+i);
}

int main()
{
	/*	bool b; // 1 byte
		char c1; // 1 byte
		wchar_t c2;
		int i1; // 4 
		long long i2; // 8
		double d1;
		long double d2;
		void v; // absence of information
		int* a1;// pointers 
		char a2[10]; // arrays
		double &a3;
		vector<int> && name//;
	        enum and enum class

		boolean to integer conversion
		boolean - true - 1 and false 0 
		
		int to bool conversion
		non-zero - true and 0 to false
	 */
	
	bool b1 = 7;
	//bool b2 {7}; // error narrowing {$2.2.2 , $10.5}
	
	int i1 = true;
	int i2 {true};
	
	bool b {7!=0};
	
	/* 
	 * char - 8 bits | 1 byte 
	 * signed char 
	 * unsigned char
	 * wchar_t - larger chars like unicode
	 * char16_t - UTF-16
	 * char32_t - UTF-32
	 * */
	//intval();
	//digits();
	
	
	/*
	 * 
	 *  Signed and Unsigned Characters
	 *
	 * */

	char c22 = 255;
	int i23 = c22;
	cout << c22 << i23;

	return 0;
}
