#pragma once

#include <iostream>
#include <stack>
#include "./Commads/CommandInterface.hpp"

// Controller class to manage command execution and undo functionality

class Controller
{
private:
    CommandInterface *CurrentCommand;
    std::stack<CommandInterface *> CommandHistory; // Stack to keep track of command history

public:
    void SetCommand(CommandInterface *NewCommand)
    {
        CurrentCommand = NewCommand;
    }
    void ExecuteCommand()
    {
        if (CurrentCommand)
        {
            CurrentCommand->execute();           // Execute the current command
            CommandHistory.push(CurrentCommand); // Push the executed command onto the history stack
        }
        else
        {
            std::cout << "No command set to execute.\n";
        }
    }
    void UndoCommand()
    {
        if (!CommandHistory.empty())
        {
            CommandInterface *lastCommand = CommandHistory.top(); // Get the last command from the history stack
            CommandHistory.pop();                                 // Remove the last command from the history stack
            lastCommand->undo();                                  // Undo the last command
            delete lastCommand;                                   // Clean up the command object
        }
        else
        {
            std::cout << "No command to undo.\n";
        }
    }
    virtual ~Controller()
    {
        while (!CommandHistory.empty())
        {
            delete CommandHistory.top(); // Clean up all commands in the history stack
            CommandHistory.pop();
        }
        if (CurrentCommand)
        {
            delete CurrentCommand; // Clean up the current command if it exists
        }
    }
};