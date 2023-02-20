// Tutorial 020.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

//std::ws allows whitespaces to be printed 

int main()
{
    std::cout << "Enter your full name: \n";
    std::string name{};
    std::getline(std::cin >> std::ws, name); 

    std::cout << "Enter your age: \n";
    std::string age{};
    std::getline(std::cin >> std::ws, age); 

    std::cout << "Your full name is: " << name << " and your age is: " << age; 
}