#pragma once

#include <iostream>
class Light {
public:
    void on() {
        std::cout << "Turning Light ON\n";
    }
    void off() {
        std::cout << "Turning Light OFF\n";
    }
    virtual ~Light() = default;
};