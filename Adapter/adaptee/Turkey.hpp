#pragma once 

class Turkey {
    public :
    virtual void gobble() =0;
    virtual void fly() = 0;   // Pure virtual function for flying behavior
    virtual ~Turkey() = default;
};
