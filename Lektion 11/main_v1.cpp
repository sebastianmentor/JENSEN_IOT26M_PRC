#include <iostream>
#include <string>

// typedef struct{
//     int id;
//     double varde;
// }Sensor;

class Bil{
public:
    std::string name;
    int miles;
};

class Sensor {
    public:
        int id;
        double value;

    void print(){
        std::cout << "Id:    " << id << "\n";
        std::cout << "Value: " << value << "\n"; 
    }

    void update_id(int id){
        std::cout << "Old id: " << this -> id << "\n";
        std::cout << "New id: " << id << "\n";
        this -> id = id;
    }
};

int main() {
    Sensor s1;
    s1.id = 1;
    s1.value = 21.5;
    // std::cout << s1.value << "\n";
    s1.print();
    s1.update_id(2);
    s1.print();

    Bil bmw;
    bmw.name = "Billy";
    bmw.miles = 1000;
    // bmw.print();

    return 0;
}