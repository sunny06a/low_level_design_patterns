#include "Duck.cpp"
#include "../FlyBehaviour/NoFly.cpp"
#include "../QuackBehaviour/Squeek.cpp"

class RubberDuck : public Duck {
    public:
    RubberDuck(){
        std::cout << "New Rubber Duck Added" << std::endl;
        flyBehaviour = new NoFly();
        quackBehaviour = new Squeek();
    }
    void Display(){
        std::cout << "I am Rubber";
    }
};