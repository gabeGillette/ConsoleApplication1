#pragma once
#include <iostream>

class Dragon
{
public:
    Dragon(std::string name, int age, int firePower) : name(name), age(age), firePower(firePower) {

    }

    void breatheFire() {
        std::cout << name << " breathes fire with power " << firePower << "!\n";
    }

    void displayInfo() {
        std::cout << "Dragon Name: " << name << "\n";
        std::cout << "Age: " << age << "\n";
        std::cout << "Fire Power: " << firePower << "\n";
    }

private:
    std::string name;
    int age;
    int firePower;
};

