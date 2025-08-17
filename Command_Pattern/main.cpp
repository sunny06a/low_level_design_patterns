#include <iostream>
#include "Invoker.hpp"
#include "./Commads/LightOnCommand.hpp"
#include "./Commads/LightOffComman.hpp"
#include "./Commads/ThermostatSetTemp.hpp"

using namespace std;

int main()
{
    Controller controller; // Create a controller to manage commands
    Light livingRoomLight; // Create a light object for the living room
    Thermostat thermostat; // Create a thermostat object
    int choice;
    cout << "Welcome to the Smart Home Controller!\n";
    do
    {
        cout << "Choose an action:\n";
        cout << "1. Turn on the living room light\n";
        cout << "2. Turn off the living room light\n";
        cout << "3. Set thermostat temperature\n";
        cout << "4. Undo last action\n";
        cout << "Press any other key to exit.\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            LightOnCommand *lightOn = new LightOnCommand(&livingRoomLight); // Create a command to turn on the light
            controller.SetCommand(lightOn);
            controller.ExecuteCommand(); // Execute the command
            break;
        }
        case 2:
        {
            LightOffCommand *lightOff = new LightOffCommand(&livingRoomLight); // Create a command to turn off the light
            controller.SetCommand(lightOff);
            controller.ExecuteCommand(); // Execute the command
            break;
        }
        case 3:
        {
            int temp;
            cout << "Enter temperature to set (10-30 degrees): ";
            cin >> temp;
            ThermostatSetTempCommand *setTempCommand = new ThermostatSetTempCommand(&thermostat, temp); // Create a command to set thermostat temperature
            controller.SetCommand(setTempCommand);
            controller.ExecuteCommand();
            break;
        }
        case 4:
        { 
            controller.UndoCommand(); // Undo the last executed command
            break;
        }
        default:
            cout << "Exiting the Smart Home Controller.\n";
            return 0; // Exit the loop and program
        }
    } while (choice >= 1 && choice <= 4); // Continue until an invalid choice is made

    cout << "Thank you for using the Smart Home Controller!\n";
    return 0; // Exit the program
}
