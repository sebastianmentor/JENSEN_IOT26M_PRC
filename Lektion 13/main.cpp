#include <iostream>
#include "User.h"
#include "Student.h"

int main(){
    // User new_user("Sebastian", "qwer1234");
    Student new_student("Sebastian", "qwer1234");
    new_student.add_course("Math");
    new_student.add_course("Programming");
    new_student.add_course("Cooking");
    new_student.add_course("MATH");

    std::string user_input;
    std::cout << "Enter password: ";
    std::cin >> user_input;

    if(new_student.authenticate(user_input)){
        std::cout << "You are now logged in " << new_student.get_name() << "\n";
        std::cout << "Your username is:" << new_student.get_username() << "\n";
        new_student.print_courses();

        std::string new_password;
        std::cout << "Enter new password";
        std::cin >> new_password;
        
        if(new_student.change_password(user_input, new_password)){
            std::cout << "Password now is changed!\n";
        }
    }
    else{
        std::cout << "Not correct password, get the hell out of here " << new_student.get_name();
    }


}