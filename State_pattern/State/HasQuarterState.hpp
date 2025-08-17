#pragma once
#include <iostream>
#include "State.hpp"

// Forward declarations to break include cycle
class GumBallMachine;
class NoQuarterState;
class SoldState;

class HasQuarterState : public States
{
    GumBallMachine *Machine;

public:
    HasQuarterState(GumBallMachine *machine) : Machine(machine) {}

    void insertQuarter() override
    {
        std::cout << "You can't insert another quarter.\n";
    }

    void ejectQuarter() override
    {
        std::cout << "Quarter returned.\n";
        Machine->setState(new NoQuarterState(Machine));
    }

    void turnCrank() override
    {
        std::cout << "You turned the crank.\n";
        Machine->setState(new SoldState(Machine));
    }

    void dispense() override
    {
        std::cout << "No gumball dispensed.\n";
    }
};
