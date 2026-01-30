// Complete Guide to C++ Programming Foundations
// Exercise 03_06
// Preprocessor Directives, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

#define MAX_AMMO 500        // Every time the processor finds MAX_AMMO it will assign 500...
                            //symbol is called a Macro no ; is needed
#define DEBUG               //Assures that the code on line 17 will be executed

int main(){
    int32_t ammo = MAX_AMMO / 5;
    uint8_t health_items = 5;

#ifdef DEBUG
    std::cout << "[DEBUG] Starting game simulation...." << '\n';
#endif

    ammo += 200; // Player finds extra ammo
    health_items -= 2; // Player uses some health items

    std::cout << "Final Ammo: " << ammo << std::endl;
    std::cout << "Remaining Health Items: " << (int) health_items << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
