#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = { 10, 20, 30, 40};
    
    for (int number:numbers){ 
        std::cout << number << '\n';
    }

    return 0;

}