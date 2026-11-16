#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

class Student
{
private:
    int points_;
public:
    std::string name;
    Student(std::string name, int points):points_(points), name(name){}
    int get_points() const {return points_;}

    bool operator==(const Student& other) const
    {
        return points_ == other.points_;
    }
};

void print_students(const std::vector<Student>& students){
    for(auto &s:students){
        std::cout << "Student " << s.name << " with points " << s.get_points() << "\n";
    }
}

bool compare_gt_student_points(const Student& s1, const Student& s2){
    return s1.get_points() > s2.get_points();
}

bool hot_fix(const Student& s1, const Student& s2){
    return !compare_gt_student_points(s1,s2);
}

bool compare_names(const Student& s1, const Student& s2){
    return s1.name < s2.name;
}


int main() {
    std::vector<Student> students;
    students.push_back(Student("Sebastian", 77));
    students.push_back(Student("Kalle", 27));
    students.push_back(Student("Eva", 81));
    students.push_back(Student("Julia", 60));
    students.push_back(Student("Fabian", 91));
    students.push_back(Student("Isa", 27));
    students.push_back(Student("Nisse", 2));
    students.push_back(Student("Frida", 45));
    students.push_back(Student("Ted", 54));

    std::cout << "We have " << students.size() << " number of students!\n";

    print_students(students);
    std::cout << "Sort student by decending order!\n";
    std::sort(students.begin(), students.end(), compare_gt_student_points);

    print_students(students);

    std::cout << "Sort student by name!\n";
    std::sort(students.begin(), students.end(), compare_names);
    print_students(students);

    auto s = std::max_element(students.begin(), students.end(), hot_fix);

    std::cout << "Top student is " << s->name << " with points " 
    << s->get_points() << "\n";

    Student new_student("Harald", 60);

    for(const auto &old_student: students){
        if(old_student == new_student){
            std::cout << "We found two students with the same amoutn of points!\n"
            << old_student.name << " and " << new_student.name << " have points " << old_student.get_points() << "\n";
        }
    }

    // for fun

    std::map<std::string, int> name_points;

    for(auto &s:students){
        name_points[s.name] = s.get_points();
    }

    for(const auto& [name, points]: name_points){
        std::cout << "Name " << name << " with points " << points << "\n"; 
    }

    return 0;
}