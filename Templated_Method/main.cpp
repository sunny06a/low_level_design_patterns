#include <iostream>
#include "Shop.hpp"
#include "CoffeeBeverage.hpp"
#include "TeaBeverage.hpp"

using namespace std;

int main()
{
    BeverageShop *beverage;
    int choice;
    cout << "Welcome to the Beverage Shop!\n";
    cout << "Choose a beverage:\n";
    cout << "1. Coffee\n";
    cout << "2. Tea\n";
    cout << "Press any other key to exit.\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;
    do
    {
        if (choice == 1)
        {
            beverage = new CoffeeBeverage();
        }
        else if (choice == 2)
        {
            beverage = new TeaBeverage();
        }
        else
        {
            cout << "Invalid choice.\n";
            return 1;
        }
        beverage->prepareBeverage();
        delete beverage;
        cout << "Choose a beverage:\n";
        cout << "1. Coffee\n";
        cout << "2. Tea\n";
        cout << "Press any other key to exit.\n";
        cout << "Enter your choice (1 or 2): ";
        cin >> choice;
    } while (choice == 1 || choice == 2);
    cout << "Thank you for your order!\n";

    return 0;
}
