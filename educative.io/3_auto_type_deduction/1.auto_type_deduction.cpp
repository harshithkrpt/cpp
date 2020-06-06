#include <iostream>

/* 
 *   Key Features 
 *          - The techniques for automatic function template argument deductions are used.
 *          - complicated template expressions
 *          - enables us to work with unknown types
 */

int main()
{
    auto myStr = "Educative";
    auto myDoub = 3.14;
    auto myInt = 3;

    /*
    Lambda Functions
     auto func = [] { return 5; };

    auto name = func();
    std::cout << "name : " << name;
 */
    std::cout
        << myStr << std::endl;
    std::cout << myDoub << std::endl;
    std::cout << myInt << std::endl;

    // Use Carefully with initializer lists

    auto myInt{2011};
    auto myInt2 = {2011};
}