/* 
 *  A reference is an alias for an existing variable. It can be created using the & operator
 * 
 *      References VS Pointers
 *            -> reference is never null                  
 *            -> references behave like constant pointers
 *            -> value can change but we cannot create a new reference with that value
 *            -> pointers ref initialization of variable with same type                  
 */
#include <iostream>

// reference parameters
void xchg(int &x, int &y)
{
    int t = x;
    x = y;
    y = t;
}

int main()
{
    int i = 20;
    int &iRef = i;

    std::cout << "i: " << i << std::endl;
    std::cout << "iRef: " << iRef << std::endl;

    std::cout << std::endl;

    iRef = 30;

    std::cout << "i: " << i << std::endl;
    std::cout << "iRef: " << iRef << std::endl;
    int a = 10;
    int b = 20;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    xchg(a, b);
    std::cout << std::endl;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
}