#include<iostream>
#include "Duck/MallardDuck.cpp"
#include "Duck/ModelDuck.cpp"
#include "Duck/RubberDuck.cpp"
#include "FlyBehaviour/FlyWithWings.cpp"

/*
Design Principle 
- Identify the aspects of your application that vary and separate them from what stays the same.
- Program to an interface, not an implementation.
- Favor composition over inheritance. (most time is spe nt on maintaing the code rather than writing it so use interface than inheritane)

*/

// Strategy pattern is used to define a family of algorithms, encapsulate each one of them and make them interchangeable. 
// Strategy lets the algorithm vary independently from the clients that use it.
// Algorithm eg (swimwithwings, swimnoway) are encapsulated in separate classes and they are interchangeable


int main(){

    MallardDuck *mallard = new MallardDuck();
    
    mallard->PerformFly();
    mallard->PerformQuack();

    ModelDuck *model = new ModelDuck();
    
    model->PerformFly();
    model->PerformQuack();

    RubberDuck *rubber = new RubberDuck();

    rubber->PerformFly();
    rubber->PerformQuack();

    // Changing the fly behaviour of model duck to FlyWithWings
    std::cout << "Changing the fly behaviour of model duck to FlyWithWings Dynamically" << std::endl;
    model->setFlyBehaviour(new FlyWithWings());
    model->PerformFly();

    return 0;
}