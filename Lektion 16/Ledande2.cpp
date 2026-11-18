#include <iostream>
#include <vector>

void erase_even_integers(std::vector<int>& tal){

    for(auto it = tal.begin(); it != tal.end(); ) {
        if (*it % 2 == 0) {
            it = tal.erase(it);
            // tal.erase(it);
            // tal.push_back(1);
        }
        else {
            ++it;
        }
    }
}

int main() {
    std::cout << "Start program!\n";
    std::vector<int> tal = {1, 2, 3, 4, 5, 6};
    erase_even_integers(tal);

    for (int t : tal) {
        std::cout << t << " ";
    }
    std::cout << "\n";

 return 0;
 }