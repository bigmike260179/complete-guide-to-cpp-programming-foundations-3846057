// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5;           // Global variables... to be avoided

int main()
{
    bool myFlag;        // Local variable
    a = 7;
    myFlag = false;


    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << "Flag = " << myFlag << '\n';
    std::cout << "Subtraction answer: " << (a - b) << '\n';
    std::cout << "Addition answer: " << (a + b) << '\n';

    myFlag = true;
    std::cout << "Flag = " << myFlag << '\n';

    unsigned int positive;
    positive = b - a;
    std::cout << "Unsigned Subtraction answer: " << (b - a) << '\n';

    std::cout << std::endl << std::endl;

    return 0;
}
