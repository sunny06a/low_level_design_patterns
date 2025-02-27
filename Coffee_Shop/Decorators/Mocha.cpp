#pragma once 

#include "Decorator.cpp"
#include "../Beverages/Beverage.cpp"

class Mocha : public Decorator{
    Beverage *beverage;
    public :
    Mocha(Beverage *b) {
        beverage = b;
    }
    double cost(){
        return 0.20 + beverage->cost();
    }
    std::string getDescription(){
        return beverage->getDescription() + ", Mocha";
    } 
};