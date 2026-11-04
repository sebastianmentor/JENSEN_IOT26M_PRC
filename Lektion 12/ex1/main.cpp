#include <iostream>
#include "Sensor.h"

int main() {
    Sensor s1(21.5);
    std::cout << s1.get_value() << "\n";

    Sensor s2(-500);
    std::cout << s2.get_value() << "\n";
    return 0;
}