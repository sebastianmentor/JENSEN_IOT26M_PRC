#ifndef Course_Class_H
#define Course_Class_H

#include <string>
#include "Teacher.h"

class Course
{
private:
    std::string course_name;
    std::string description;
    Teacher teacher;

public:
    Course(
        std::string course_name,
        std::string description,
        Teacher teacher
    );

    ~Course();

    std::string get_course_name();
    std::string get_course_description();
    bool fire_teacher(Teacher new_teacher);
    std::string get_teacher_info();

};




#endif