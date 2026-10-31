#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = { 10, 20, 30, 40};
    
    for (std::size_t i =0; i < numbers.size(); i++){ 
        // std::size_t is an unsigned integer type that is used to represent the size of an object in bytes. It is commonly used for array indexing and loop counters, as it can hold the maximum size of any object in memory.
        // using it instead of int is a good practice becau se it avoids potential issues with negative values and ensures that the loop counter can accommodate the size of the vector.
        std::cout << numbers[i] << '\n';
    }

    return 0;

}