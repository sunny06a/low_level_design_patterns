#pragma once 

class Duck {
    public :
    virtual void quack() = 0; // Pure virtual function for quacking behavior
    virtual void fly() = 0;   // Pure virtual function for flying behavior
    virtual ~Duck() = default;

};