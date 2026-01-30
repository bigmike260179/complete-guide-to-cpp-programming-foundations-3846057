// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main()
{
    float target_x;
    int32_t sprite_x;
    uint32_t player_x;

    //target_x = 123.45       //Compiler recognizes a double
    //target_x = 123.45f;   //Tells the compiler we want a float variable

    target_x = -123.45;
    sprite_x = target_x;
    player_x = sprite_x;

    std::cout << "Target X (float): " << target_x << '\n';
    std::cout << "Sprite X (int32_t): " << sprite_x << '\n';        //Truncates the number
    //std::cout << "Player X (uint32_t): " << player_x << '\n'; /   //List e to the 32 - 123.45 as the answer
    //This fixes the problem:
    std::cout << "Player X (uint32_t): " << static_cast<int32_t>(player_x) << '\n';

    std::cout << std::endl << std::endl;
    return 0;
}
