#include <iostream>
#include "Student.h"

int student_id_count = 1000;

Student::Student(std::string name)
{
    if(name.length() > 1){
        this -> name = name;
    }
    else{
        this -> name = "Jon Doe";
    }

    student_id = student_id_count;
    student_id_count++;
}

Student::~Student()
{
    std::cout << "Im out in the free now! No emplyment for me in the age of AI :( \n";
}

std::string Student::get_name(){
    return name;
}

bool Student::set_name(std::string new_name){
    if(new_name.length() > 1){
        name = new_name;
        return true;
    }
    return false;
}

int Student::get_id(){
    return student_id;
}

void Student::print_courses(){
    for(auto  course: courses){
        std::cout << "Course name " << course.get_course_name() << "\n";
        std::cout << "Course description " << course.get_course_description() << "\n";
        std::cout << course.get_teacher_info() << "\n\n";
    }
}

bool Student::take_course(Course new_course){
    for(auto course: courses){
        if(std::addressof(course) == std::addressof(new_course)){
            return false;
        }
    }

    courses.push_back(new_course);
    return true;
}
