#include <iostream>
#include "./WeatherData/WeatherData.cpp"
#include "./Display/RemoteDisplay.cpp"
#include "./Display/TvDisplay.cpp"

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