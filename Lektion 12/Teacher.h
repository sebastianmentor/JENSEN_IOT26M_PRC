#ifndef Teacher_Class_H
#define Teacher_Class_H

#include <string>

class Teacher
{
private:
    std::string name;
    std::string subject;
public:
    Teacher(std::string name, std::string subject);
    ~Teacher();

    std::string get_name();
    std::string teaches();
};

#endif