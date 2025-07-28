#include<iostream>
#include "Duck/MallardDuck.cpp"
#include "Duck/ModelDuck.cpp"
#include "Duck/RubberDuck.cpp"
#include "FlyBehaviour/FlyWithWings.cpp"

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