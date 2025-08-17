#pragma once
#include <iostream>
#include "State.hpp"

// Forward declarations (avoid circular includes)
class GumBallMachine;
class HasQuarterState;

class NoQuarterState : public States 
{
    GumBallMachine *Machine;

public:
    NoQuarterState(GumBallMachine *machine) : Machine(machine) {}

    void insertQuarter() override
    {
        std::cout << "You inserted a quarter.\n";
        Machine->setState(new HasQuarterState(Machine));
    }

    void ejectQuarter() override
    {
        std::cout << "You haven't inserted a quarter.\n";
    }

    void turnCrank() override
    {
        std::cout << "You turned, but there's no quarter.\n";
        std::cout << "You need to insert a quarter first.\n";
    }

    void dispense() override
    {
        std::cout << "You need to pay first.\n";
    }
};
