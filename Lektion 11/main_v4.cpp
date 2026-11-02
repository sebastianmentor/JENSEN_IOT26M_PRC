#include <iostream>
#include <string>

/*
Vi behöver hjälp med att hålla koll på betygen på våra 
studenter när de tar en ny kurs. Vi behöver därför ett system
där vi kan skriva in alla studenterna till en ny kurs och uppdatera
deras betyg och sedan få en utskrift på detta!
*/

// 1. Vilka substantiv har vi?
//      Vi har Betyg, Studenter, Kurs
// 2 Vad ska saker kunna göra?
//      En student ska kunna veta om sitt betyg
//      En student ska kunna ta en kurs
//      Vi ska kunna skriva in studenter på en kurs
//      Vi ska kunna uppdatera betyg
//      Vi ska kunna skriva ut kurs-info

class Grade
{
public:
    int points;
    char grade;

    Grade(int points){
        this -> points = points;
        int g = points / 10;
        switch (g)
        {
        case 10:
            grade = 'A';
            break;
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;                    
        case 7:
            grade = 'C';
            break;            
        case 6:
            grade = 'D';
            break;
        case 5:
            grade = 'E';
            break;                               
        default:
            grade = 'F';
            break;
        }
    }

    bool update(int new_points){
        if(0 > new_points && new_points > 100){
            return false;
        }

        int g = new_points / 10;
        switch (g)
        {
        case 10:
            grade = 'A';
            break;
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;                    
        case 7:
            grade = 'C';
            break;            
        case 6:
            grade = 'D';
            break;
        case 5:
            grade = 'E';
            break;                               
        default:
            grade = 'F';
            break;
        }

        return true;
    }
};



class Student
{
public:
    std::string name;
    Grade grade;

    Student(Grade g, std::string n)
        : grade(g), name(n){}
    Student()
        : grade(0), name(""){}

    void print() const {
        std::cout << "Student " << name <<" grade " << grade.grade << "\n";
    }

    char get_grade() const{
        return grade.grade;
    }
};

int main() {

    Student *students[10];
    int number_of_students = 0;

    while (true)
    {
        std::cout << "1. Add new student\n";
        std::cout << "2. Print all students\n";
        std::cout << "0. Exit\n";

        int user_input;
        std::cout << "Enter choice: ";
        std::cin >> user_input;


        if(user_input == 1){
            if(number_of_students==10){
                std::cout << "Maximum students, cant add!\n";
                continue;
            }

            std::string new_name;
            int points;
            std::cout << "Enter student name: ";
            std::cin >> new_name;
            std::cout << "Enter points: ";
            std::cin >> points;
            students[number_of_students] = new Student(points, new_name);
            number_of_students++;

        }
        else if(user_input == 2){
            for(int i = 0; i < number_of_students; i++){
                std::cout << "Student " << i+1 << "\n";
                std::cout << students[i] -> name << "\n";
                std::cout << (*students[i]).get_grade() << "\n\n";
            }
        }
        else if(user_input == 0){
            std::cout << "Clean up! Free the memory!\n";
            for(int i = 0; i < number_of_students; i++){
                delete students[i];
            }
            std::cout << "All done, see ya!\n";
            break;
        }
        else{
            std::cout << "Invalid choice\n";
        }

    }
    
    
    // for(int i = 0; i < 10; i++)
    // {
    //     students[i].print();
    // }

    return 0;
}