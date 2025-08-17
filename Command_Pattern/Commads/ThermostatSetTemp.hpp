#pragma once

#include <iostream>
#include "CommandInterface.hpp"
#include "../Device/Thermostat.hpp"

class ThermostatSetTempCommand : public CommandInterface
{
private:
    Thermostat *thermostat; // Pointer to the Thermostat object
    int temperature; // Temperature to set
    int previousTemperature; // To store the previous temperature for undo functionality
public:
    // Constructor to initialize the Thermostat object and the temperature to set
    ThermostatSetTempCommand(Thermostat *t, int temp) : thermostat(t), temperature(temp), previousTemperature(t->getTemperature()) {}

    void execute() override
    {
        if (thermostat)
        {
            previousTemperature = thermostat->getTemperature(); // Store the current temperature before changing it
            thermostat->setTemperature(temperature);
        }
    }

    void undo() override
    {
        if (thermostat)
        {
            thermostat->setTemperature(previousTemperature); // Restore the previous temperature
        }
    }
};