#include <iostream>
#include <string>

int main(){
    std::string name = "Valipokkann";

    int numbers[4] = { 5,10,15,20};

    std::cout << "length of name is ";
    std::cout << name.length();

    std::cout << "\n array sum is ";
    std::cout << numbers[1] + numbers [3] << '\n';

    return 0;

}