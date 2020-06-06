/* 
 * */

#include <iostream>

int main()
{
    int i = 20; // a variable containing an integer
    int *iptr = &i;
    std::cout << iptr << std::endl;
    std::cout << *iptr << std::endl;
    i = 30;
    std::cout << *iptr << std::endl;
    *iptr = 50;
    std::cout << *iptr << std::endl;

    // Pointer Arithmetic
    // arr[i] => *(arr + i) => i[arr]
    int arr[] = {14, 30, 95, 44};
    std::cout << arr[2] << std::endl;
    std::cout << *(arr + 2) << std::endl;
    std::cout << 2 [arr] << std::endl;

    // Dynamic Memory
    float *flpt = new float(10.30); // float in dynamic memory
    std::cout << *flpt << std::endl;

    int *intArr = new int[10]; // a dynamic array of size 10 created
    intArr[0] = 20;

    std::cout << intArr[0] << std::endl;
}