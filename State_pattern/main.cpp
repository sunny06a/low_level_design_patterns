
#include <iostream>
#include "./GumBallMachine.hpp" 
#include "./State/State.hpp"
#include "./State/NoQuarterState.hpp"
#include "./State/HasQuarterState.hpp"
#include "./State/SoldOutState.hpp"
#include "./State/SoldState.hpp"

using namespace std;

int main()
{
    GumBallMachine machine(5); // Create a gumball machine with 5 gumballs
    int choice;
    cout << "Welcome to the Gumball Machine!\n";
    do
    {
        cout << "Choose an action:\n";
        cout << "1. Insert a quarter\n";
        cout << "2. Eject quarter\n";
        cout << "3. Turn the crank\n";
        cout << "Press any other key to exit.\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            machine.insertQuarter(); // Insert a quarter
            break;
        case 2:
            machine.ejectQuarter(); // Eject the quarter
            break;
        case 3:
            machine.turnCrank(); // Turn the crank
            machine.dispense(); // Dispense a gumball
            break;
        default:
            cout << "Exiting the Gumball Machine.\n";
            return 0;
        }
    } while (choice >= 1 && choice <= 3);
    cout << "Thank you for using the Gumball Machine!\n";
    return 0;
}