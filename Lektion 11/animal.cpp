#include <iostream>
#include <string>
#include "animal.h"


Dog::Dog(std::string dog_name, std::string dog_breed)
    : name(dog_name), breed(dog_breed){};

void Dog::bark(){
    std::cout << "The dog " << name << " of breed " << breed << " is barking\n";
}



Cat::Cat(std::string cat_name, std::string cat_breed)
    : name(cat_name), breed(cat_breed){};

void Cat::meow(){
    std::cout << "The cat " << name << " of breed " << breed << " meows\n";
}