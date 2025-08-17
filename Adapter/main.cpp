#include <iostream>
#include "DuckAdapter.hpp"
#include "./adaptee/MallardDuck.hpp"
#include "./adaptee/WildTurkey.hpp"

using namespace std;

int main() {
    Turkey *turkeyA = new WildTurkey();
    // i cant call turkeyA->quack() because it is not a Duck as my legacy code uses quack() so i created a adapter of a class Duck 
    // which i already have in my codebase
    // so i can use the turkeyA as a Duck by using the TurekyAdapter class
    Duck *AdaptiveTurkey = new TurekyAdapter(turkeyA);

    AdaptiveTurkey->fly();
    AdaptiveTurkey->quack();
}