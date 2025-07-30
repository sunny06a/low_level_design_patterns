#pragma once
#include<string>

class Item {
    private :
    std::string name;
    float price;
    std::string description;
    public :
    //member list intialization 
    
    Item(std::string name, float price, std::string description):name(name), price(price), description(description) {}
    std::string getName() const {
        return name;
    }
    float getPrice() const {
        return price;
    }
    std::string getDescription() const {
        return description;
    }
    void setName(const std::string& name) {
        this->name = name;
    }
    void setPrice(float price) {
        this->price = price;
    }
    void setDescription(const std::string& description) {
        this->description = description;
    }
    ~Item() {
    }    
};