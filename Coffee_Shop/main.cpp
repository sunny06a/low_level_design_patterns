#include <iostream>
#include "./Decorators/Mocha.cpp"
#include "./Beverages/Espresso.cpp"
#include "./Beverages/DarkRoast.cpp"
#include "./Decorators/Milk.cpp"


int main(){
    Beverage *beverage = new Espresso();
    std::cout << beverage->getDescription() << " $" << beverage->cost() << std::endl;
    std::cout << "Adding Milk" << std::endl;
    beverage = new Milk(beverage);
    std::cout << beverage->getDescription() << " $" << beverage->cost() << std::endl;

    Beverage *beverage2 = new DarkRoast();
    beverage2 = new Mocha(beverage2);
    beverage2 = new Mocha(beverage2);
    beverage2 = new Mocha(beverage2);
    std::cout << beverage2->getDescription() << " $" << beverage2->cost() << std::endl;

    return 0;
}