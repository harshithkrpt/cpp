#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void showlist(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << "\t" << *it;
    cout << "\n";
}

int main()
{
    list<int> glist1, glist2;

    for (int i = 0; i < 10; i++)
    {
        glist1.push_back(i * 2);
        glist2.push_front(i * 3);
    }

    cout << "\nList 1 (glist 1) is : ";
    showlist(glist1);

    cout << "\nList 2 (glist 2) is : ";
    showlist(glist2);

}