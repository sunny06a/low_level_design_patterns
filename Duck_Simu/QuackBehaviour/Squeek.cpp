#pragma once

#include "QuackBehaviour.cpp"

class Squeek : public QuackBehaviour {
        public:
        void quack(){
            std::cout << "I squeek " << std::endl;
        }
};