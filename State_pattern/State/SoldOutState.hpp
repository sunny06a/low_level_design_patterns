#pragma once
#include <iostream>
#include "State.hpp"

// Forward declaration instead of including GumBallMachine.hpp
class GumBallMachine;

class SoldOutState : public States
{
    GumBallMachine *Machine;

public:
    SoldOutState(GumBallMachine *machine) : Machine(machine) {}

    void insertQuarter() override
    {
        std::cout << "You can't insert a quarter, the machine is sold out.\n";
    }

    void ejectQuarter() override
    {
        std::cout << "You can't eject, you haven't inserted a quarter yet.\n";
    }

    void turnCrank() override
    {
        std::cout << "You turned, but there are no gumballs.\n";
        std::cout << "You can't turn the crank, the machine is sold out.\n";
    }

    void dispense() override
    {
        std::cout << "No gumball dispensed, the machine is sold out.\n";
    }
};
