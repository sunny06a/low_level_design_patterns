#pragma once
#include <iostream>

class Light {
    public:
    void on(){
        std::cout << "Light is ON\n";
    }
    void off(){
        std::cout << "Light is OFF\n";
    }
    
    // It is important to declare the destructor as virtual to ensure proper cleanup of derived classes.
    virtual ~Light() = default;
};