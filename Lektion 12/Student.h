#ifndef Student_Class_H
#define Student_Class_H

#include <string>
#include <vector>
#include "Course.h"

class Student
{
private:
    int student_id;
    std::string name;
    std::vector<Course> courses;
public:
    Student(std::string name);
    ~Student();

    std::string get_name();
    bool set_name(std::string new_name);
    int get_id();
    void print_courses();
    bool take_course(Course new_course);

};





#endif