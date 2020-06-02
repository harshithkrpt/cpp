#include<iostream>

using namespace std;

/*
struct Link {
	Link *previous;
	Link *successor;
};
*/

//struct List; // this declaration is required to use below before its defination

struct Link;

struct List {
	Link *head;
};

struct Link {
	Link *pre;
	Link *suc;
	List *member_of;
	int data;
};


int main()
{
	
	return 0;
}
