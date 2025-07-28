#include "Display.cpp"
#include "Observer.cpp"
#include "../WeatherData/WeatherData.cpp"

class RemoteDisplay : public DisplayElement, public Observer {
    private :
    float temperature;
    float humidity;
    float pressure;
    Subject *weatherData;
    
    public :
    RemoteDisplay(Subject *weatherData){
        this->weatherData = weatherData;
        weatherData->registerObserver(this);
    }

    void update(float temperature, float humidity, float pressure){
        //if we want to pass the whole WeatherData object
        // this->weatherData = weatherData;  // if we want to store the reference to the WeatherData object
        // This allows the observer to access all the data it needs directly
        this->temperature = temperature;
        this->humidity = humidity;
        this->pressure = pressure;
        display();
    }

    void display(){
        std::cout << "Remote Display: " << temperature << "F degrees and " << humidity << "% /humidity" << std::endl;
    }

};