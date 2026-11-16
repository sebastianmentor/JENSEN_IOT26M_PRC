#include <iostream>
#include <algorithm>
#include <vector>

void print_vector_int(const std::vector<int>& numbers){
    for (auto it = numbers.begin(); it != numbers.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> varden;
    for (int i = 0; i < 50; i++) {
        std::cout << varden.capacity() <<"\n";
        varden.push_back(i * 10);
    }
    std::cout << "Storlek: " << varden.size() << "\n";
    std::cout << "varden[49] = " << varden[49] << "\n";
    // std::cout << "varden.at(50) = " << varden.at(50) << "\n";
    // std::cout << "varden[50] = " << varden[50] << "\n";

    // std::cout << "[";
    // for (auto it = varden.begin(); it != varden.end(); it++){
    //     std::cout << *it << ", ";
    // }
    // std::cout << "]\n";

    print_vector_int(varden);

    for (auto &v:varden){
        v+=1;
    }

    print_vector_int(varden);

    int total_sum = 0;

    for(auto &v:varden){
        total_sum+=v;
    }
    std::cout << "Total sum is " << total_sum << "\n";

    std::vector<int> new_varden;

    for(int i = 10; i < 30; i++){
        new_varden.push_back(i * 5);
    }

    varden.insert(varden.end(), new_varden.begin(), new_varden.end());

    print_vector_int(varden);

    // std::sort(varden.begin(), varden.end());
    std::sort(varden.begin(), varden.end(), [](int a, int b) {return a > b;});

    print_vector_int(varden);

    auto it = std::find(varden.begin(), varden.end(), 55);
    if (it != varden.end()) {
        std::cout << "Hittade: " << *it << "\n";
    }    


    return 0;
}