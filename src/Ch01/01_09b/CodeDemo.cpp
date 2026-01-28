// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>

int main()
{
    std::string userName;
    std::cout << "Hi There! Please enter your name: ";
    std::cin >> userName;

    std::cout << "Thank you " << userName << " welcome to the course\n";
    std::cout << std::endl << std::endl;
    
    return 0;
}