#pragma once

#include "QuackBehaviour.cpp"

class NoQuack : public QuackBehaviour {
        public:
        void quack(){
            std::cout << "I can't Quack" << std::endl;
        }
};