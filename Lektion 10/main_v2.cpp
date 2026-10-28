#include <iostream>

void double_value(int& value)
{   
    std::cout << "void double_value(int& value)" << std::endl;
    value = 2 * value;
}

void double_value(double& value)
{
    std::cout << "void double_value(double& value)" << std::endl;
    value = 2 * value;
}

void inc(double& number)
{
    number = number + 1.0;
}

void inc(int& number)
{
    number = number + 1;
}


int main() {

    int user_number;
    int& my_ref = user_number;
    std::cout << "Enter a number: ";
    std::cin >> user_number;
    std::cout << "You enter " << user_number << "\n";
    inc(my_ref);
    std::cout << "We increse it by one and get " << user_number << "\n";
    int best_number = 42;
    my_ref = best_number;
    std::cout << "my_ref = " << my_ref << std::endl;
    double_value(my_ref);
    std::cout << "user_number after double_value(my_ref)" << user_number <<"\n";

    // test overloading
    int my_int = 12;
    double my_double = 3.4;
    std::cout << my_int << " " << my_double << "\n";
    inc(my_int);
    inc(my_double);
    std::cout << my_int << " " << my_double << "\n";
    double_value(my_int);
    double_value(my_double);
    std::cout << my_int << " " << my_double << "\n";



    return 0;
}