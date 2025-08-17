#pragma once
#include <iostream>

class Thermostat
{
private:
    int temperature;

public:
    Thermostat() : temperature(20) {} // Default temperature set to 20 degrees
    void setTemperature(int temp)
    {
        if (temp < 10 || temp > 30)
        {
            std::cout << "Temperature out of range. Please set between 10 and 30 degrees.\n";
            return;
        }
        temperature = temp;
        std::cout << "Thermostat temperature set to " << temperature << " degrees.\n";
    }
    int getTemperature() const
    {
        return temperature;
    }
    // It is important to declare the destructor as virtual to ensure proper cleanup of derived classes.
    virtual ~Thermostat() = default;
};