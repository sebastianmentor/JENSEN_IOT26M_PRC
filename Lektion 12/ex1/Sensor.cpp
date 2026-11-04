#include "Sensor.h"

Sensor::Sensor(double initial_value) {
    if(initial_value > -273.15){
        value = initial_value;
    }
    else{
        value = -273.15;
    }

}

double Sensor::get_value() {
    return value;
}

void Sensor::set_value(double new_value) {
    if (new_value >= -273.15)
        value = new_value;
}