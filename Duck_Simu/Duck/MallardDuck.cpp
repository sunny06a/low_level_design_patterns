#include "Duck.cpp"
#include "../FlyBehaviour/FlyWithWings.cpp"
#include "../QuackBehaviour/Quack.cpp"


// We can also use constructor injection to set the fly and quack behaviour
class MallardDuck : public Duck {
    public:
    MallardDuck(){
        std::cout << "New Mallard Duck Added" << std::endl;
        // Setting default behaviors for MallardDuck
        // This can also be done through constructor injection (flyBehaviour and quackBehaviour can be passed as parameters)
        flyBehaviour = new FlyWithWings();
        quackBehaviour = new Quack();
    }
    void Display(){
        std::cout << "I am Mallard";
    }
}; 