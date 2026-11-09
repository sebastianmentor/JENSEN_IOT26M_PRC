#include "Student.h"
#include <iostream>


Student::Student(std::string name, std::string password)
    :User("EDU"+name, password), name_(name){}

const std::string& Student::get_name() const{
    return name_;
}

bool Student::add_course(std::string new_course){
    std::string tmp = new_course;
    for(auto &c:tmp){
        c = tolower(c);
    }

    for(auto course: courses_){
        for(auto &c: course){
            c = tolower(c);
        }
        if(tmp == course){
            return false;
        }
    }

    courses_.push_back(new_course);
    return true;
}

void Student::print_courses() const{
    std::cout << "Student " << name_ << " takes courses:\n";
    for(auto course: courses_){
        std::cout << "\t" << course << "\n";
    }
}