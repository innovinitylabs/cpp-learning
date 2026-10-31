#include <iostream>

int square(int i){
    return i * i;
}

int sum_of_squares(int a, int b){
    return square(a) + square(b);
}

int main(){
    std::cout << sum_of_squares(3, 4) << '\n';
}