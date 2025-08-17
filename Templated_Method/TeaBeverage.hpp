#pragma once

#include<iostream>
#include "Shop.hpp"

class TeaBeverage : public BeverageShop {    
    public:
    void brew() override {
        std::cout << "Steeping the tea\n";
    }
    void addCondiments() override {
        std::cout << "Adding Lemon\n";
    }
    // Override the OrderPlaced hook to simulate a coffee order
    bool OrderPlaced() override {
        std::cout<<"Want to place an order for tea? (1 for Yes, 0 for No): ";
        int choice;
        std::cin >> choice;
        return choice == 1 ? true : false;
    }
};