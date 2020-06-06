#include <iostream>
#include <typeinfo>

/* 
 *          null_pointers
 *              properties : 
 *                 nullptr to arbitrary pointers
 *                 pointer becomes null pointer and points to no data
 *                 we cannot dereference a nullptr
 *                 nullptr can be compared with all other pointeres
 *                 nullptr can be converted to all pointers this also holds true for pointers to class members.
 *                 
 * 
 */

std::string overloadTest(char *)
{
    return "char*";
}

std::string overloadTest(long int)
{
    return "long int";
}

int main()
{
    /*  
    draw back of  NULL and 0 as pointer
    std::cout << std::endl;

    int a = 0;
    int *b = 0;
    auto c = 0;

    std::cout << typeid(c).name() << std::endl;

    auto res = a + b + c;
    std::cout << "res : " << res << std::endl;
    std::cout << typeid(res).name() << std::endl; 
    */
    std::cout << std::endl;

    long int *pi = nullptr;
    // long int i = nullptr; // Error
    auto nullp = nullptr;
    bool b(nullptr);
    std::cout << std::boolalpha << "b: " << b << std::endl;
    auto val = 5;
    if (nullptr < &val)
    {
        std::cout << "nullptr < &val" << std::endl;
    }
    std::cout << "overloadTest(nullptr)= " << overloadTest(nullptr) << std::endl;
    /* The simple rule is: Use nullptr instead of 0 or NULL. Still not convinced? Here is my final and strongest point. */
    std::cout << std::endl;
}