#pragma once

#include "FlyBehaviour.cpp"

class FlyWithWings : public FlyBehaviour {
        public:
        void fly(){
            std::cout << "I fly with wings" << std::endl;
        }
};