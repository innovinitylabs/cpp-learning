#include <iostream>

int main(){
    int age;

    std::cout << "enter the age: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "you can vote ";
    }
    else {
        std::cout << "you cant vote ";
    }

    return 0;
}