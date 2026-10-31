#include <iostream> 

int main() {
    int i = 0;

    while (i <= 111){
        if (i == 11){
            break;
        }
        std::cout << i << '\n';
        i++;
    }
    return 0;
}