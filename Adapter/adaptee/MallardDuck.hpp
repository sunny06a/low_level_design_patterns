#pragma once 

#include <iostream>
#include "Duck.hpp"

class MallardDuck : public Duck {
    public :
    void quack() override {
        std::cout << "Quack! Quack!\n";
    }
    void fly() override {
        std::cout << "Mallard Duck is flying!\n";
    }
    virtual ~MallardDuck() = default;
};