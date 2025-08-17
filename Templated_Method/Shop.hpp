#pragma once

#include <iostream>

class BeverageShop {
    public :

    void prepareBeverage() {
        if (!OrderPlaced()) {
            std::cout << "Order not placed, cannot prepare beverage.\n";
            return;
        }
        boilWater();
        brew();
        pourInCup();
        addCondiments();
    }
    void boilWater() {
        std::cout<< "Boiling water\n"  ;
    }

    void pourInCup() {
        std::cout<< "Pouring into cup\n"  ;
    }

    virtual void brew() = 0;
    virtual void addCondiments() = 0;

    //Hook
    virtual bool OrderPlaced(){
        return true;
    }
    
    // It is important to declare the destructor as virtual to ensure proper cleanup of derived classes.
    virtual ~BeverageShop() = default;
};