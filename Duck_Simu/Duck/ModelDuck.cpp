#include "Duck.cpp"
#include "../FlyBehaviour/FlyWithoutWing.cpp"
#include "../QuackBehaviour/NoQuack.cpp"

class ModelDuck : public Duck {
    public:
    ModelDuck(){
        std::cout << "New Model Duck Added" << std::endl;
        flyBehaviour = new FlyWithoutWings();
        quackBehaviour = new NoQuack();
    }
    void Display(){
        std::cout << "I am Model";
    }
};