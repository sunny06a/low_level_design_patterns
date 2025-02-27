#pragma once
#include<string>

class Beverage {
    public :
    std::string description = "Unknown Beverage";
    virtual std::string getDescription() {
        return description;
    };
    virtual double cost() = 0;
};