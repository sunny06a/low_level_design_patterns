#pragma once

#include <iostream>
#include "CommandInterface.hpp"
#include "../Device/Light.hpp"

class LightOnCommand : public CommandInterface
{
private:
    Light *light; // Pointer to the Light object
public:
    // Constructor to initialize the Light object
    LightOnCommand(Light *l) : light(l) {}
    // Execute the command to turn the light on
    void execute() override
    {
        if (light)
        {
            light->on();
        }
    }
    // Undo the command to turn the light off
    void undo() override
    {
        if (light)
        {
            light->off();
        }
    }
    // It is important to declare the destructor as virtual to ensure proper cleanup of derived classes.
    virtual ~LightOnCommand() = default;
};
