#include <iostream>
#include <cassert>
#include <vector>

double medelvarde(const std::vector<int>& varden) {
    if(varden.size()==0) return 0;

    int summa = 0;

    for (int v : varden) summa += v;
    
    return (double)summa / varden.size();
}

void test_medelvarde_valid_vector(){
    std::vector<int> v1 = {1,2,3,4,5};
    assert(medelvarde(v1) == 3.0);

    std::vector<int> v2 = {1,2,3,4,5,6};
    assert(medelvarde(v2) == 3.5);
}

void test_medelvarde_empty_vector(){
    std::vector<int> v;
    assert(medelvarde(v) == 0);
}

double discount_20_percent(double money){
    double discount = 0.2;
    return money * (1 - discount);
}

int main() {
    int num = 2 + 2;
    assert(num == 4);
    std::cout << "num is 4" << std::endl;

    test_medelvarde_valid_vector();
    test_medelvarde_empty_vector();
    std::cout << "All test succeded!\n";

    std::cout << "20 percent discount on 100 is " <<discount_20_percent(100.0) << "\n";

    std::vector<int> tom;
    std::cout << "Send tom to medelvarde"<<std::endl;
    std::cout << "tom.size() = " << tom.size() << std::endl;
    std::cout << medelvarde(tom) << "\n";
    std::cout << "After meldevarde(tom)\n";


    std::vector<int> box;
    box.push_back(4);
    box.push_back(9);
    box.push_back(1);
    box.push_back(-3);
    box.push_back(-2);
    box.push_back(10);
    box.push_back(5);
    
    size_t box_size = box.size();
    assert(box_size == 6); // is removed if the flag -DNDEBUG is in the compiler command

    std::cout << "Last number is " << box[box_size] << "\n";

    return 0;
 }