// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class character_role {protagonist, antagonist, sidekick, npc};
// Game character structure
struct gameCharacter
{
    std::string name;
    int level;
    character_role role;
};


int main(){
    
    gameCharacter hero;
    hero.name = "Rambo";
    hero.level = 99;

    // Specify a role from the character_role enum
    hero.role = character_role::sidekick;

    // Prints out gamecharacter objetct hero info with the role as an enum int index value
    std::cout << hero.name << " is a level " << hero.level << " with the role of " << (int) hero.role << '\n';
    std::cout << std::endl << std::endl;

    return 0;
}
