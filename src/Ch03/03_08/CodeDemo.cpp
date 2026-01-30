// Complete Guide to C++ Programming Foundations
// Challenge 03_08
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

double my_average(int a, int8_t b, uint32_t c){
    double result = 0.0;

    result = (a + b + c) / 3.0;
    // Had we divided by just 3 it would have been a int division cause all of the variables are integers
    // So we make one element of the operation a double 3 ---> becomes 3.0
    
    return result;
}

int main(){
    int a = -12;
    int8_t b = 15;
    uint32_t c = 10;
    double learnerResult = my_average(a, b, c);
    
    std::cout << "Your code returned: " << learnerResult << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}