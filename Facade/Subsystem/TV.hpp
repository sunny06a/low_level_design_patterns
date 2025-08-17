#pragma once

#include <iostream>

class TV {
    public:
    void on() {
        std::cout << "Turning TV ON\n";
    }
    void off() {

        std::cout << "Turning TV OFF\n";

    }
    void setChannel(int channel) {
        std::cout << "Setting TV channel to " << channel << "\n";
    }
};