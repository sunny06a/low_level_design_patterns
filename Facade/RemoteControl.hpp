#pragma once

#include <iostream>
#include <string>
#include "Subsystem/TV.hpp"
#include "Subsystem/Light.hpp"
#include "Subsystem/PopCorn.hpp"

class RemoteControl
{
private:
    TV *tv;
    Light *light;
    PopCorn *popcorn;

public:
    RemoteControl(TV *tv, Light *light, PopCorn *popcorn)
        : tv(tv), light(light), popcorn(popcorn) {}

    void WatchTV(int channel)
    {
        popcorn->prepare(); // Prepare popcorn before watching TV
        light->on();        // Turn on the light
        tv->on();          // Turn on the TV
        tv->setChannel(channel);
        std::cout << "Enjoy your show!\n";
    }
    void EndTV(){
        popcorn->clean(); // Clean the popcorn machine
        tv->off();
        light->off(); // Turn off the light
        std::cout << "TV session ended. Lights off and popcorn machine cleaned.\n";
    }
};