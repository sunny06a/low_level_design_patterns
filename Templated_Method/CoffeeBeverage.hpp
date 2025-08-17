#pragma once

#include<iostream>
#include "Shop.hpp"

class CoffeeBeverage : public BeverageShop {    
    public:
    void brew() override {
        std::cout << "Dripping Coffee through filter\n";
    }
    void addCondiments() override {
        std::cout << "Adding Sugar and Milk\n";
    }
    // Override the OrderPlaced hook to simulate a coffee order
    bool OrderPlaced() override {
        std::cout<<"Want to place an order for coffee? (1 for Yes, 0 for No): ";
        int choice;
        std::cin >> choice;
        return choice == 1 ? true : false;
    }
};