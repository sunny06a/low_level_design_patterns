#pragma once

#include <iostream>

class PopCorn {
    public:
    void prepare() {
        std::cout << "Preparing PopCorn...\n";
    }
    void clean(){
        std::cout << "Cleaning PopCorn Machine...\n";
    }
};