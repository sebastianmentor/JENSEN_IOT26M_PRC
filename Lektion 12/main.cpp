#include <iostream>
#include "Teacher.h"
#include "Course.h"
#include "Student.h"


int main(){
    Teacher sebastian("Sebastian", "Programming");
    Teacher stefan("Stefan", "IT");

    Course c_programming("Progarmming with C", 
        "Learn all the hard stuff about the low programming language C",
        sebastian);

    Course cloud_computing("Cloud Computing", "Learn all about the magic of cloud computing!", stefan);

    Student kalle("Kalle Anka");

    std::cout << "Student " << kalle.get_id() << " has name " << kalle.get_name() << "\n";

    kalle.take_course(c_programming);
    kalle.take_course(cloud_computing);

    std::cout << kalle.get_name() << " is now taking courses: ";
    kalle.print_courses();

}