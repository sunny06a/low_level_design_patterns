#pragma once

#include <iostream>

class CommandInterface {
    public:
    virtual void execute() = 0; // Pure virtual function to execute the command
    virtual void undo() = 0; // Pure virtual function to undo the command

    // It is important to declare the destructor as virtual to ensure proper cleanup of derived classes.
    virtual ~CommandInterface() = default;
};