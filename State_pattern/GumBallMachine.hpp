#pragma once

#include "./State/State.hpp"

// Forward declarations to avoid circular includes
class NoQuarterState;
class HasQuarterState;
class SoldOutState;
class SoldState;

class GumBallMachine
{
private:
    States *CurrentState;
    int Count;

public:
    GumBallMachine(int count) : CurrentState(nullptr), Count(count)
    {
        if (count > 0)
        {
            CurrentState = new NoQuarterState(this);
        }
        else
        {
            CurrentState = new SoldOutState(this);
        }
    }

    void setState(States *state)
    {
        if (CurrentState)
        {
            delete CurrentState; // Clean up previous state
        }
        CurrentState = state;
    }

    void insertQuarter()   { CurrentState->insertQuarter(); }
    void ejectQuarter()    { CurrentState->ejectQuarter(); }
    void turnCrank()       { CurrentState->turnCrank(); }
    
    void dispense()
    {
        CurrentState->dispense();

        // If current state is SoldState, decrement inventory
        if (dynamic_cast<SoldState*>(CurrentState) != nullptr)
        {
            Count--;
            if (Count == 0)
            {
                setState(new SoldOutState(this));
            }
            else
            {
                setState(new NoQuarterState(this));
            }
        }
    }

    int getCount() const { return Count; }
    States *getCurrentState() const { return CurrentState; }

    virtual ~GumBallMachine()
    {
        delete CurrentState;
    }
};
