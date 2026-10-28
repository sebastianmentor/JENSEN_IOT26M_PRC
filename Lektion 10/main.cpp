#include <iostream>
#include <string>

#define MAX_PERSONS 10

typedef struct{
    int id;
    std::string name;
    int age;
    double hight;
}Person;

typedef struct{
    Person persons[MAX_PERSONS];
    int count;
}PersonRegister;

void print_person(Person& p)
{   
    std::cout << "\nPerson " << p.id << " data:\n";
    std::cout << "Name: "<<p.name << "\n";
    std::cout << "age: "<<p.age << "\n";
    std::cout << "hight: "<<p.hight << "\n";
}


void create_person(Person& p, int id)
{
    std::cout << "Enter persons name: ";
    std::cin  >> p.name;

    std::cout << "Enter persons age: ";
    std::cin >> p.age;

    std::cout << "Enter person hight: ";
    std::cin >> p.hight;

    p.id = id;
}

void change_person(Person& p)
{
    while (true)
    {
        std::cout << "\n1. Change name\n";
        std::cout << "2. Change age\n";
        std::cout << "3. Change hight\n";
        std::cout << "0. Go back\n";

        int user_input;
        std::cout << "Enter choice: ";
        std::cin >> user_input;

        if(user_input == 1){
            std::string new_name;
            std::cout << "Enter new name: ";
            std::cin >> new_name;
            p.name = new_name;
        }
        else if(user_input == 2){
            std::cout << "Enter new age: ";
            std::cin >> p.age;

        }
        else if(user_input == 3){
            std::cout << "Enter new hight: ";
            std::cin >> p.hight;
        }
        else if(user_input == 0){
            break;
        }
        else{
            std::cout << "Invalid choice\n";
        }
        
    }
    
}

void init_PersonRegister(PersonRegister& pr)
{
    pr.count = 0;
}

int main() {

    PersonRegister pr;
    init_PersonRegister(pr);
    bool run_program = true;
    int person_id_count = 1;

    std::cout << "Welcome to persons program!\n";

    while(run_program){
        int person_index = -1;

        std::cout << "1. Add new person\n";
        std::cout << "2. Print all persons\n";
        std::cout << "3. Change person\n";
        std::cout << "4. Remove person\n";
        std::cout << "0. Exit\n";
        
        int user_input;
        std::cout << "Enter choice: ";
        std::cin >> user_input;

        switch (user_input)
        {
        case 0:
            run_program = false;
            break;
        case 1:
            if(pr.count < MAX_PERSONS){
                create_person(pr.persons[pr.count], person_id_count);
                pr.count++;
                person_id_count++;
            }
            else{
                std::cout << "Sorry, register is full!\n";
            }
            break;
        case 2:
            for(int i = 0; i < pr.count; i++){
                print_person(pr.persons[i]);
            }
            break;
        case 3:
            int person_id;
            std::cout << "Enter persons id: ";
            std::cin >> person_id;

            for(int i = 0; i < pr.count; i++){
                if(person_id == pr.persons[i].id)
                {
                    person_index = i;
                    break;
                }
            }

            if(person_index != -1){
                change_person(pr.persons[person_index]);
            }
            else{
                std::cout << "No person with id " << person_id << "\n";
            }

            break;
        case 4:
            std::cout << "Enter persons id: ";
            std::cin >> person_id;

            for(int i = 0; i < pr.count; i++){
                if(person_id == pr.persons[i].id)
                {
                    person_index = i;
                    break;
                }
            }
            if(person_index != -1){
                for(int i = person_index; i < pr.count; i++)
                {
                    pr.persons[i] = pr.persons[i+1];
                }
                pr.count--;
            }
            else{
                std::cout << "No person with id " << person_id << "\n";
            }

            break;
                     
        default:
            std::cout << "Invalid choice, try again!\n";
            break;
        }


    }

    return 0;
}