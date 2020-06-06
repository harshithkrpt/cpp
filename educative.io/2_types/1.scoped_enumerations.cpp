/*  
 *     Enumberation are custom data types containing integer constants
 *      
 *      These Integer Constants are called as Enumerations                         
 *              
 *      Draw Backs of Enums : 
 * 
 *          Enumerations Implicitly Converto to int    
 *          Enumerators in the enclosing scope.
 *          The type of the enumeration cannot be specified.
 * 
 * 
 * 
 *          After C++ 11
 * 
 *          Strogly Typed Enumerations or Scoped Enumerations have the follwing stronger rules
 *          
 *          1. Enums can only be accessed in the scope of the enumeration
 *          2. enums donot implicitly convert to int
 *          3. enums are not imported into the enclosing scope
 *          4. type of enum is by default int and we can forward declare the enumeration  
 * 
 * 
 *          Strongly typed enums use a keyword class or struct additionally     
 * 
 *          Classically they are known as unscoped and scoped enums
 *       
 */

#include <iostream>

enum OldEnum
{
    one = 1,
    ten = 10,
    hundred = 100,
    thousand = 1000
};

enum struct NewEnum
{
    one = 1,
    ten = 10,
    hundred = 100,
    thousand = 1000
};

void construction()
{
    std::cout << std::endl;

    std::cout << "C++11= " << 2 * thousand + 0 * hundred + 1 * ten + 1 * one << std::endl;
    std::cout << "C++11= " << 2 * static_cast<int>(NewEnum::thousand) + 0 * static_cast<int>(NewEnum::hundred) + 1 * static_cast<int>(NewEnum::ten) + 1 * static_cast<int>(NewEnum::one) << std::endl;
}

int main()
{
    std::cout << std::endl;

    enum Colour
    {
        red = 0,
        green = 2,
        blue
    };

    std::cout << "red: " << red << std::endl;
    std::cout << "green: " << green << std::endl;
    std::cout << "blue: " << blue << std::endl;

    int red2 = red;
    std::cout << "red2:" << red2 << std::endl;

    // int red = 10; Error

    construction();
}
