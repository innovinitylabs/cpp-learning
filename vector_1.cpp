#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = { 10, 20, 30};
    // vectors are like python lists but different, 
    //they are dynamic and can grow and shrink as needed

    std::cout << "before push " << numbers.size() << '\n';

    numbers.push_back(40);

    std::cout << "after push " << numbers.size() << '\n';
    std::cout << numbers[3] << '\n';

    return 0;

}