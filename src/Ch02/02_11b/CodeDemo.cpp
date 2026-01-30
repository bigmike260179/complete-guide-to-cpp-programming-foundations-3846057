// Complete Guide to C++ Programming Foundations
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

// TO DO: Line 12 -> convert farenheit to celsius using only intergers
// line 21: floating point number: display the floating point number 3 times with different types stated in the code

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    celsius = (static_cast<float>(5) / 9) * (fahrenheit - 32);  // cast 1 to float because the are both declared int

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;

    float weight = 10.99;
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl;                    // prints out float likes it is
    std::cout << "Integer part   : " << static_cast<int>(weight) << std::endl;  // C++ static_cast
    std::cout << "Fractional part: " << (int)((weight - (int)weight) * 10000) << std::endl;      // C-style cast

    std::cout << std::endl << std::endl;
    return 0;
}
