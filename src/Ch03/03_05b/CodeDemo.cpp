// Complete Guide to C++ Programming Foundations
// Exercise 03_05
// Compound Assignment Operators, by Eduardo Corpeño 

#include <iostream>

int main(){
    int ammo = 30;
    int incoming_zombies = 20;

    std::cout << "Initial Ammo: " << ammo << std::endl;
    std::cout << "Initial Zombies Incoming: " << incoming_zombies << std::endl;

    // Addition assignment
    ammo += 10;
    std::cout << "Ammo after finding more: " << ammo << '\n';

    // Subtraction assignment
    ammo -= 5;
    std::cout << "Ammo after using gun: " << ammo << '\n';

    // Multiplication assignment
    incoming_zombies *= 2;
    std::cout << "Zombies duplicated after timeout: " << incoming_zombies << '\n';

    // Division assignment
    ammo /= 2;
    std::cout << "Ammo after sharing some with a friend: " << ammo << '\n';

    // Remainder assignment ---> 17/6 = 2 remainder 5 ---> so 5 is the answer
    ammo %= 6;
    std::cout << "Ammo left in magazine: " << ammo << '\n';

    std::cout << std::endl << std::endl;
    return 0;
}
