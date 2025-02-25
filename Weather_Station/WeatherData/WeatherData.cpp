#pragma once
#include<iostream>
#include "Subject.cpp"
#include <vector>

class WeatherData : public Subject {
    private :
    float temperature;
    float humidity;
    float pressure;
    std::vector<Observer*> observers;

    public:
    void registerObserver(Observer *o){
        observers.push_back(o);
    }

    void removeObserver(Observer *o){
        for(int i = 0; i < observers.size(); i++){
            if(observers[i] == o){
                observers.erase(observers.begin() + i);
                break;
            }
        }
    }

    void notifyObservers(){
        for(int i = 0; i < observers.size(); i++){
            observers[i]->update(temperature, humidity, pressure);
        }
    }
    void measurementsChanged(){
        notifyObservers();
    }
    void setMeasurements(float temperature, float humidity, float pressure){
        this->temperature = temperature;
        this->humidity = humidity;
        this->pressure = pressure;
        measurementsChanged();
    }
};