#include <iostream>
#include "Teacher.h"

Teacher::Teacher(std::string name, std::string subject)
    : name(name), subject(subject){}

Teacher::~Teacher(){
    std::cout << "Alrigt, i " << name << " go and look for another job!";
}

std::string Teacher::get_name(){
    return name;
}

std::string Teacher::teaches(){
    return subject;
}