#pragma once  // Include guard to prevent multiple inclusions of this header file

// inlcude necessary headers
#include "../FlyBehaviour/FlyBehaviour.cpp"
#include "../QuackBehaviour/QuackBehaviour.cpp"


class Duck {
    public:
    
    FlyBehaviour *flyBehaviour;
    QuackBehaviour *quackBehaviour;

    Duck(){
    }
    void PerformFly(){
        flyBehaviour->fly();
    }
    void PerformQuack(){
        quackBehaviour->quack();
    }
    // Setter methods to change behaviors at runtime
    void setFlyBehaviour(FlyBehaviour *fb){
        flyBehaviour = fb;
    }
    void setQuackBehaviour(QuackBehaviour *qb){
        quackBehaviour = qb;
    }
    // Virtual function to be overridden by derived classes
    virtual void Display(){
    }

};