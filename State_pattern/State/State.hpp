// State.hpp
#pragma once

// Forward declaration of GumBallMachine to avoid circular dependency
class GumBallMachine; // forward declare

class States {
public:
    virtual void insertQuarter() = 0;
    virtual void ejectQuarter() = 0;
    virtual void turnCrank() = 0;
    virtual void dispense() = 0;
    virtual ~States() {}
protected:
    GumBallMachine* Machine; // pointer is fine with incomplete type
};