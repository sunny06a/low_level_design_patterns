#include <iostream>
#include "./Subsystem/TV.hpp"
#include "./Subsystem/Light.hpp"
#include "./Subsystem/PopCorn.hpp"
#include "RemoteControl.hpp"
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
    // Create subsystem objects
    TV *tv = new TV();
    Light *light = new Light();
    PopCorn *popcorn = new PopCorn();
    // Create the RemoteControl facade
    RemoteControl *remote = new RemoteControl(tv, light, popcorn);
    int channel;
    cout << "Welcome to the Home Theater System!\n";
    cout << "Enter the channel you want to watch: ";
    cin >> channel;
    // Use the RemoteControl to watch TV
    remote->WatchTV(channel);
    // End the TV session
    while (true)
    {
        if (_kbhit())
        {
            char ch = _getch();
            ch = tolower(static_cast<unsigned char>(ch));
            if (ch == 'q')
            {
                std::cout << "TV ended.\n";
                break;
            }
        }
        else
        {
            std::cout << "Continuing to watch TV on channel "<<channel<<" ... (press Q\\q to turn off )\n";
            Sleep(1000);
        }
    }
    remote->EndTV();
    // Clean up
    delete remote;
    delete tv;
    delete light;
    delete popcorn;
    cout << "Thank you for using the Home Theater System!\n";
    return 0;
}
