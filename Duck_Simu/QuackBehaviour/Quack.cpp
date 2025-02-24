#pragma once

#include "QuackBehaviour.cpp"

class Quack : public QuackBehaviour {
        public:
        void quack(){
            std::cout << "I quack " << std::endl;
        }
};