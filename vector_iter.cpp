#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = { 10, 20, 30, 40};
    
    for (int i =0; i < numbers.size(); i++){
        std::cout << numbers[i] << '\n';
    }

    return 0;

}