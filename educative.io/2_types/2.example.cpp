#include <iostream>

enum class Color1
{
    red,
    blue,
    green
};

enum struct Color2 : char
{
    red = 100,
    blue,
    green
};

void useMe(Color2 c2)
{
    switch (c2)
    {
    case Color2::red:
        std::cout << "Color2::red" << std::endl;
        break;
    case Color2::blue:
        std::cout << "Color2::blue" << std::endl;
        break;
    case Color2::green:
        std::cout << "Color2::green" << std::endl;
        break;
    }
}

int main()
{
    std::cout << std::endl;

    std::cout << "static_cast<int>(Color1::red): " << static_cast<int>(Color1::red) << std::endl;
    std::cout << "static_cast<int>(Color2::red): " << static_cast<int>(Color2::red) << std::endl;

    std::cout << std::endl;

    std::cout << "sizeof(Color1) = " << sizeof(Color1) << std::endl;
    std::cout << "sizeof(Color2) = " << sizeof(Color2) << std::endl;

    std::cout << std::endl;

    Color2 color2Red{Color2::red};
    useMe(color2Red);

    std::cout << std::endl;
}