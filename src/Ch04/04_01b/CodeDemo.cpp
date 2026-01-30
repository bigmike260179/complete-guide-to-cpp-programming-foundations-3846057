// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define LEVEL_COUNT 4      // Creating a macro for the number of levels

int main(){

    const size_t LEVEL_COUNT = 4;
    int ennemies[LEVEL_COUNT];

    // methods of initialisation
    ennemies[0] = 10;
    ennemies[1] = 15;
    ennemies[2] = 20;
    ennemies[3] = 25;

    float levelDifficulty[] = { 1.0, 3.5, 6.0, 10.5 };

    std::cout << "The games has " << LEVEL_COUNT << " levels: " << '\n';
    std::cout << "Level 1: " << ennemies[0] << " ennemies" << '\n';
    std::cout << "Level 2: " << ennemies[1] << " ennemies" << '\n';
    std::cout << "Level 3: " << ennemies[2] << " ennemies" << '\n';
    std::cout << "Level 4: " << ennemies[3] << " ennemies" << '\n';

    std::cout << '\n';
    std::cout << "Difficulties are as follows: " << '\n';
    std::cout << "Level 1: " << levelDifficulty[0] << " rating" << '\n';
    std::cout << "Level 2: " << levelDifficulty[1] << " rating" << '\n';
    std::cout << "Level 3: " << levelDifficulty[2] << " rating" << '\n';
    std::cout << "Level 4: " << levelDifficulty[3] << " rating" << '\n';


    std::cout << std::endl << std::endl;
    return 0;
}
