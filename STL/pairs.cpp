// a way to store two hetrogenous objects together
// in utility header
#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair<int, char> PAIR1;
    cout << PAIR1.first << " ";
    cout << PAIR1.second << endl;
    PAIR1.first = 100;
    PAIR1.second = 'G';

    cout << PAIR1.first << " ";
    cout << PAIR1.second << endl;

    // Another Initilization Process

    pair<string, double> PAIR2("Harshith", 10.9);

    cout << PAIR2.first << " " << PAIR2.second << endl;

    // PAIR Automatically initialization

    return 0;
}