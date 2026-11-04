#ifndef SENSOR_H
#define SENSOR_H


class Sensor {
public:
    Sensor(double initial_value);
    double get_value();
    void set_value(double new_value);

private:
    double value;
};

#endif