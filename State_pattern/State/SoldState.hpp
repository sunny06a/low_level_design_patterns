#pragma once
#include <iostream>
#include "State.hpp"

// Forward declaration to break circular include
class GumBallMachine;

class SoldState : public States
{
    GumBallMachine *Machine;

public:
    SoldState(GumBallMachine *machine) : Machine(machine) {}

    void insertQuarter() override
    {
        std::cout << "Please wait, we're already giving you a gumball.\n";
    }

    void ejectQuarter() override
    {
        std::cout << "Sorry, you already turned the crank.\n";
    }

    void turnCrank() override
    {
        std::cout << "Turning twice doesn't get you another gumball!\n";
    }

    void dispense() override
    {
        std::cout << "A gumball comes rolling out the slot.\n";
        // Later you might want to transition to:
        //   - NoQuarterState (if gumballs remain)
        //   - SoldOutState (if empty)
        // That will require forward-declaring those classes too.
    }
};
