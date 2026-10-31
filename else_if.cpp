#include <iostream>

int main(){
    int age;

    std::cout << "enter the age: ";
    std::cin >> age;

    if (age > 18) {
        std::cout << "you can vote \n";
    }
    else if (age == 18) {
        std::cout << "congrats on your first vote ";
    }
    else {
        std::cout << " sorry you cant vote ";
    }

    return 0;
}