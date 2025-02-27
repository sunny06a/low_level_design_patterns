#pragma once 
#include "../Beverages/Beverage.cpp"

class Decorator : public Beverage{
    public:
    virtual std::string getDescription() = 0;
};

