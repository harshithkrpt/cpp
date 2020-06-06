#include <iostream>

void addOne(int &x)
{
    x += 1;
}

struct X
{
    int data;
};

void pointer_to_member()
{
    std::cout << std::endl;
    int X::*p = &X::data; // syntax to make member as a pointer
    X object;
    object.data = 2011;
    X *objptr = new X;
    objptr->data = 2014;

    int k = object.*p;
    int l = objptr->*p;

    std::cout << "k: " << k << std::endl;
    std::cout << "l: " << l << std::endl;

    std::cout << std::endl;
}

int main()
{
    void (*inc1)(int &) = addOne;
    auto inc2 = addOne;

    int a{10};

    addOne(a);
    std::cout << "after addOne(a): " << a << std::endl;
    inc1(a);
    std::cout << "after inc1(a): " << a << std::endl;
    inc2(a);
    std::cout << "after inc2(a): " << a << std::endl;

    std::cout
        << std::endl;

    pointer_to_member();
}