#include <iostream>

void countdown(int n){
    if (n == 0){
        return;
    }

    std::cout << n << '\n';

    countdown(n-1);
}

int main(){
    int number;
    std::cout << "enter countdown no: \n";
    std::cin >> number;

    countdown(number);

    return 0;
}