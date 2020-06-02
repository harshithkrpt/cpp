#include<iostream>

using namespace std;

struct Address {
	const char *name;
	int number;
	const char *street;
	const char *town;
	char state[2];
	const char *zip;
};


void f() {
	Address a;
	a.name = "Harshith";
	a.number = 61;
}

void print_addr(Address *p) {
	cout << p->name << '\n' 
		<< p->number << ' ' << p->street << '\n'
		<< p->town << '\n'
		<< p->state[0] << p->state[1] << ' ' << p->zip << '\n';
}

void print_addr2(const Address &r) {
	cout << r.name << "\n" 
		<< r.number << ' ' << r.street << '\n'
	      << r.town << '\n'
      		<< r.state[0] << r.state[1] << ' ' << r.zip << '\n';	      
}


int main(){
	Address a1 = {
		"Harshith",
		61,
		"nope",
		"no",
		{'n','j'},
		"70780"
	};
	
	print_addr(&a1);
	print_addr2(a1);
	return 0;
}
