#pragma once 

#include <iostream>
#include "Turkey.hpp"

class WildTurkey : public Turkey {
public:
    void gobble() override {
        std::cout << "Wild Turkey is gobbling!\n";
    }   
    void fly() override {
        std::cout << "Wild Turkey is flying short distances!\n";
    }
    virtual ~WildTurkey() = default;
};