#include <iostream>

int square(int n){
    return n * n;
}

int main(){
    int i = 0;
    std::cout << "enter no to square: " << '\n';
    std::cin >> i;
    std::cout << square(i) << '\n';

    return 0;


}