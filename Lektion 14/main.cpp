#include <iostream>
#include <string>
#include <memory>

class Sensor {
    // public: virtual void skriv_ut() { std::cout << "Sensor\n"; }
    private:    
        int id_; 
    public: 
        Sensor(int id): id_(id){}
        virtual void skriv_ut() = 0;
        virtual void start_konvertering() = 0;
        void print(){std::cout << "We can have methods in sensor\n";}
        int get_id() const {return id_;}
        virtual ~Sensor(){
            std::cout << "Destroy Base Sensor with id " 
                      << id_ <<" now\n";
        }

};

std::ostream &operator<<(std::ostream &out, const Sensor& sensor){
            return out << "Sensor with " << sensor.get_id() << "\n";
        }

class TemperaturSensor : public Sensor {
    public: 
        TemperaturSensor(int id):Sensor(id){}
        ~TemperaturSensor(){
            std::cout << "Destroy temperature sensor id "
                      << get_id() << " now\n";
        }

        void skriv_ut() override{
            std::cout << "Temperatursensor\n"; 
        }

        void start_konvertering() override{
            std::cout << "Start konvertering send message to 0xFF\n";
        }
};

std::ostream &operator<<(std::ostream &out, const TemperaturSensor& sensor){
            return out << "Temperature sensor with " << sensor.get_id() << "\n";
        }

class FuktSensor : public Sensor {
    public: 
        FuktSensor(int id):Sensor(id){}
        void skriv_ut() override{
            std::cout << "Fuktsensor\n"; 
        }

        void start_konvertering() override{
            std::cout << "Start konvertering send message to 0xA2\n";
        }
};

void visa(Sensor& s) { 
    s.skriv_ut(); 
}

void start_konvertering(Sensor& s){
    s.start_konvertering();
}

void visa_alla(Sensor **s, size_t size){
    for(size_t i = 0; i < size; i++){
        visa(*s[i]);
    }
}

void konvertera_alla(Sensor **s, size_t size){
    for(size_t i = 0; i < size; i++){
        start_konvertering(*s[i]);
    }
}

int main() {
    TemperaturSensor t1(1);
    // t1.id = 12;
    t1.print();
    Sensor* s = &t1;
    s->skriv_ut();
    visa(t1);

    // Sensor s1;
    TemperaturSensor s1(2);

    FuktSensor f1(3);
    FuktSensor f2(4);
    TemperaturSensor t2(5);
    std::cout <<"\n\n";
    TemperaturSensor *f3_heap = new TemperaturSensor(6);
    Sensor *sensorer[6] = {&t1, &s1, &f1, &f2, &t2, f3_heap};

    visa_alla(sensorer, 5);
    konvertera_alla(sensorer, 5);

    delete sensorer[5];

    for(int i = 0; i < 5; i++){
        std::cout << *sensorer[i] << "\n";
    }

    // std::cout << t1;
    return 0;
}