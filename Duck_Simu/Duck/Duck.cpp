#pragma once

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
    void setFlyBehaviour(FlyBehaviour *fb){
        flyBehaviour = fb;
    }
    void setQuackBehaviour(QuackBehaviour *qb){
        quackBehaviour = qb;
    }
    virtual void Display(){
    }

};