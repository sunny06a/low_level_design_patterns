#pragma once

#include "FlyBehaviour.cpp"

class NoFly : public FlyBehaviour {
        public:
        void fly(){
            std::cout << "I can't fly" << std::endl;
        }
};