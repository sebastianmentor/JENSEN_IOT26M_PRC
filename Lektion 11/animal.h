#ifndef ANIMAL_CLASS_H
#define ANIMAL_CLASS_H

#include <string>

class Dog{
    public:
    std::string name;
    std::string breed;

    Dog(std::string dog_name, std::string dog_breed);

    void bark();
}; 


class Cat{
    public:
    std::string name;
    std::string breed;

    Cat(std::string cat_name, std::string cat_breed);

    void meow();
};


#endif