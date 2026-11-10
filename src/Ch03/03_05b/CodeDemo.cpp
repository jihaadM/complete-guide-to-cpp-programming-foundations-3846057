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
    std::cout << "After finding extra ammo, Ammo: " << ammo << std::endl;

    // Subtraction assignment
    ammo -=5;
    std::cout << "After shooting some zombies, Ammo: " << ammo << std::endl;

    // Multiplication assignment
    incoming_zombies *= 2;
    std::cout << "Zombies have multiplied, Incoming Zombies now: " << incoming_zombies << std::endl;
    // Division assignment
    ammo /= 3;
    std::cout << "Dropping some ammo, Ammo now: " << ammo << std::endl;

    // Remainder assignment
    ammo %= 4;
    std::cout << "Remaining Ammo: " << ammo << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
