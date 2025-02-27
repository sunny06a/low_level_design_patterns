#pragma once 
#include "Decorator.cpp"

class Milk : public Decorator{
    Beverage *beverage;
    public :
    Milk(Beverage *b) {
        beverage = b;
    }
    double cost(){
        return 0.10 + beverage->cost();
    }
    std::string getDescription(){
        return beverage->getDescription() + ", Milk";
    }
};