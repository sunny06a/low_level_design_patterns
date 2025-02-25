#include "Display.cpp"
#include "Observer.cpp"
#include "../WeatherData/WeatherData.cpp"

class TvDisplay : public DisplayElement, public Observer {
    private :
    float temperature;
    float humidity;
    float pressure;
    Subject *weatherData;
    
    public :
    TvDisplay(Subject *weatherData){
        this->weatherData = weatherData;
        weatherData->registerObserver(this);
    }

    void update(float temperature, float humidity, float pressure){
        this->temperature = temperature;
        this->humidity = humidity;
        this->pressure = pressure;
        display();
    }

    void display(){
        std::cout << "TV Display: " << temperature << "F degrees and " << humidity << "% /humidity" << std::endl ;
    }

};