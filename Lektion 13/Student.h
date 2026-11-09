#ifndef STUDENT_CLASS_H
#define STUDENT_CLASS_H

#include "User.h"
#include <vector>

class Student: public User
{
private:
    std::string name_; 
    std::vector<std::string> courses_;
public:
    Student(std::string name, std::string password);
    const std::string&  get_name() const;
    bool add_course(std::string new_course);
    void print_courses() const;

};



#endif