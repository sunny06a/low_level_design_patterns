#include <iostream>
#include "./WeatherData/WeatherData.cpp"
#include "./Display/RemoteDisplay.cpp"
#include "./Display/TvDisplay.cpp"

/* Observer Pattern
 - Define a one-to-many dependency between objects so that when one object changes state, 
   all its dependents are notified and updated automatically.
*/

// Strive for loosely coupled designs between objects that interact.
// Loosely coupled designs allow us to build flexible OO systems that can handle change because they minimize the interdependency between objects.


//currently subject is pushy as it sends the data to the observer without the observer asking for it.
// we can make it pull based by passing the observer object to the subject and let the observer ask for the data when it needs it.

int main() {

    WeatherData *weatherData = new WeatherData();
    RemoteDisplay *remoteDisplay = new RemoteDisplay(weatherData);
    TvDisplay *tvDisplay = new TvDisplay(weatherData);

    weatherData->setMeasurements(80, 65, 30.4);
    weatherData->setMeasurements(82, 70, 29.2);
    std::cout<<"\nAfter removing TV \n\n";
    weatherData->removeObserver(remoteDisplay);
    weatherData->setMeasurements(78, 90, 29.2);
    return 0;
}