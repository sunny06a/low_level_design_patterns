#pragma once

#include "FlyBehaviour.cpp"

class FlyWithoutWings : public FlyBehaviour {
        public:
        void fly(){
            std::cout << "I Fly without wings" << std::endl;
        }
};