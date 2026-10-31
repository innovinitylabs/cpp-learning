//reference & pointer, for now references only not deep into pointers

#include <iostream>

int main() {
    int a = 10;
    int& ref = a;

    ref = 20;

    std::cout << "printing a " << a << '\n';

    return 0;
}