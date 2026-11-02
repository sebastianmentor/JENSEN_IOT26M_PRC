#include <iostream>

class Sensor {
    public:
        int id;
        double varde;

    Sensor(int startId, double startVarde)
        : id(startId), varde(startVarde) {
        std::cout << "Sensor " << id << " skapad\n";
    }

    ~Sensor() {
    std::cout << "Sensor " << id << " forstors\n";
    }

    void kalibrera(double korrektion) {
        varde += korrektion;
    }

    void skrivUt() const {
        std::cout << "Sensor " << id << ": " << varde << "\n";
    }
};

int main() {
    Sensor s1(1, 21.5);
    Sensor s2(2, 19.8);

    s1.kalibrera(-0.3);
    s1.id = 10;

    s1.skrivUt();
    s2.skrivUt();

    return 0;
}