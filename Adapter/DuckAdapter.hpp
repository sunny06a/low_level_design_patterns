#pragma once

#include <iostream>

#include "./adaptee/Duck.hpp"
#include "./adaptee/Turkey.hpp"
#include "./adaptee/MallardDuck.hpp"
#include "./adaptee/WildTurkey.hpp"

class TurekyAdapter : public Duck {
    private:
    Turkey *turkey; // compostion //object adapter pattern
    public:
    TurekyAdapter(Turkey *t) : turkey(t) {}
    void quack() override {
        turkey->gobble(); // Use the Turkey's gobble method for quacking
    }
    void fly() override {
        turkey->fly(); // Use the Turkey's fly method for flying
    }
    virtual ~TurekyAdapter() {
        delete turkey; 
    }
};


//class adapter pattern 
class TurekyAdapterClass2 : public Duck, public Turkey {
    public:
    void quack() override {
       gobble(); 
    }
    void fly() override {
        std::cout << "Turkey is flying short distances!\n"; 
    }
    void gobble() override {
        std::cout << "Gobble! Gobble!\n"; 
    }
    virtual ~TurekyAdapterClass2() = default;  
};
