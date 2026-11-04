#include <iostream>
#include "Course.h"

Course::Course(
        std::string course_name,
        std::string description,
        Teacher teacher)
    : course_name(course_name), 
    description(description),
    teacher(teacher){}

Course::~Course()
{
    std::cout << "Course " << course_name << " is now ending!\n";
}

std::string Course::get_course_name(){
    return course_name;
}

std::string Course::get_course_description(){
    return description;
}

bool Course::fire_teacher(Teacher new_teacher){
    if(std::addressof(teacher) == std::addressof(new_teacher)){
        std::cout << "Cant fire and hire the same teacher?\n";
        return false;
    }

    teacher = new_teacher;
    return true;

}

std::string Course::get_teacher_info(){
    return teacher.get_name() + " teaches " + teacher.teaches() + "\n";
}