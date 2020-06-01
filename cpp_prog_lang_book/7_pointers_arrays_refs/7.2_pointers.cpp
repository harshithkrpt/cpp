#include<iostream>
using namespace std;

int main() {
	char obj = 'a';
	char *ptr = &obj;
	cout << *ptr;
	return 0;
}
