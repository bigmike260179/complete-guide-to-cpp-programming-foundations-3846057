// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

// c-style enumeration listing
//enum asset_type {texture, sound, animation, script};
//enum menu_section {background, music, sound, controls, texture};    // same names in both enums

//Using enum classes:
enum class asset_type {texture, sound, animation, script};
enum class menu_section {background, music, sound, controls, texture};

int main()
{
    int sound = 8;      // Compiler does not complain about this conflict
                        // Compiler uses the local variables before global ones
    // int asset_value;
    asset_type asset_value;     // Create an asset_type object to get rid of assignment error
    asset_value = asset_type::sound;

    std::cout << "asset_value = " << (int) asset_value << std::endl;    //Must cast int here for number value

    std::cout << std::endl << std::endl;
    
    return 0;
}
