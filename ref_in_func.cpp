#include <iostream>
#include <string>

void change(int& n){
    n = 111;
    // n is a reference, so changing n changes the original variable
    // passed to the function.
    // n is another name for the variable passed to the function.
    // instead of return n;
}

int main() {

    int x = 11;
    change(x);
    // instead of x = change(x);
    std::cout << x << " <- x is now updated \n" ;

    return 0;
}