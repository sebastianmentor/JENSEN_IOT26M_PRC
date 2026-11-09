#include <iostream>

int sensor_id_count = 1000;

class Sensor {
protected:
    int id_;
public:
    Sensor():id_(sensor_id_count){
        sensor_id_count++;
    };

    Sensor(int id):id_(id){};

    void print() {
    std::cout << "Sensor " << id_ << "\n";
    }

    int get_id(){
        return id_;
    }
};


class TemperaturSensor : public Sensor {
public:
    double temperatur;

    TemperaturSensor(int id, double start_value):Sensor(id){
        temperatur = start_value;
    }

    TemperaturSensor(double start_value):temperatur(start_value){}

    void print(){
        std::cout << "Temperature sensor " << id_ << " ";
        std::cout << "shows temperature " << temperatur << "\n";
    }
};

class FuktSensor : public Sensor{
private:
    int humidity_;
public:
    FuktSensor():humidity_(0){}
    FuktSensor(int humidity, int id):Sensor(id){
        if(humidity > 100){
            humidity = 100;

        }else if(humidity < 0){
            humidity = 0;

        }else{
            this -> humidity_ = humidity;
        }
    }

    int get_humidity(){
        return humidity_;
    }
};


int main() {
    Sensor s1;
    s1.print();
    TemperaturSensor t1(320, 55.2);
    t1.print();
    TemperaturSensor t2(12.5);
    t2.print();
    FuktSensor f1(75, 100);
    std::cout << "Sensor " << f1.get_id() << " reads humidity " << f1.get_humidity() << std::endl; 



    return 0;
}