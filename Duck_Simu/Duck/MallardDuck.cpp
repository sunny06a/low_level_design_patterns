#include "Duck.cpp"
#include "../FlyBehaviour/FlyWithWings.cpp"
#include "../QuackBehaviour/Quack.cpp"

class MallardDuck : public Duck {
    public:
    MallardDuck(){
        std::cout << "New Mallard Duck Added" << std::endl;
        flyBehaviour = new FlyWithWings();
        quackBehaviour = new Quack();
    }
    void Display(){
        std::cout << "I am Mallard";
    }
};