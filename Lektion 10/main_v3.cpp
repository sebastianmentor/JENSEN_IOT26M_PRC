#include <iostream>
#include <string>   

typdef struct{
    std::string name;
    int age;
    double hight;
}Person;

int main() {

    std::string name;
    int numbers[5] = {0}; 
    int sum = 0;


    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Hi there " << name << "\n";

    if(name == "Sebastian"){
        std::cout << "You are the master of the universe!\n";
    }
    else{
        std::cout << "Regular noob!\n";
    }

    for(int i = 0; i < 5; i++){
        std::cout << "Enter " << i << " number: ";
        std::cin >> numbers[i];
    }
    
    for(int i = 0; i < 5; i++){
        sum += numbers[i];
    }    

    std::cout << "Total sum of all numbers is " << sum << "\n";

    return 0;
}