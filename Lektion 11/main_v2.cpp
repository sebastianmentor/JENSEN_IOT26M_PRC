#include <iostream>
#include <string>


int start_id = 1;

class Sensor {
    public:
    int id;
    double value;

    Sensor(double start_value, int id) {
        value = start_value;
        this -> id = id;
        std::cout << "Creating sensor!\n";
    }

    Sensor(double start_value){
        value = start_value;
        id = start_id;
        start_id++;
        std::cout << "Creating sensor!\n";
    }

    Sensor(){
        id = start_id;
        value = 0.0;
        start_id++;
        std::cout << "Creating sensor!\n";
    }
    
    ~Sensor(){
        std::cout << "Saving sensor " << id << " "<< value << "\n";
        std::cout << "Destroying this sensor now! Magic smoke incomming!\n";
    }
};

class Buffert {
    public:
        int *data;
        Buffert(int storlek) {
            data = new int[storlek];
            std::cout << "We allocate new int[storlek] on heap!\n";
            }
        ~Buffert() {
            delete[] data;
            std::cout << "We now free data with delete[] data\n";
        }
};

void have_fun_with_buffert(){
    int buffert_size = 0;
    std::cout << "Enter buffert size:";
    std::cin >> buffert_size;
    if(buffert_size > 0){
        Buffert buf(buffert_size);
    }
    else{
        std::cout << "Must be positive size!\n";
    }
    
}

void have_fun_with_sensor(){
    int new_id;
    double new_value;
    std::cout << "Enter sensor id:";
    std::cin >> new_id;
    std::cout << "Enter sensor value: "; 
    std::cin >> new_value;
    Sensor s(new_value, new_id);

    char user_input;
    std::cout << "Do you want create buffert?(y/n)";
    std::cin >> user_input;

    if(user_input == 'y' || user_input == 'Y'){
        have_fun_with_buffert();
    }
    else if (user_input == 'n' || user_input == 'N'){
        return;
    }
    else{
        std::cout << "Invalid choice\n";
    }

}

int main() {
    Sensor s1(3.134557, 3);
    std::cout << s1.value << "\n";
    std::cout << s1.id << "\n";

    Sensor s2;
    std::cout << s2.value << "\n";
    std::cout << s2.id << "\n";

    Sensor s3(8.12);
    std::cout << s3.value << "\n";
    std::cout << s3.id << "\n";    

    while (true)
    {
        char user_input;
        std::cout << "Do you want to enter sensor data?(y/n)";
        std::cin >> user_input;

        if(user_input == 'y' || user_input == 'Y'){
            have_fun_with_sensor();
        }
        else if (user_input == 'n' || user_input == 'N'){
            break;
        }
        else{
            std::cout << "Invalid choice\n";
        }


    }
    
    
    return 0;
}
