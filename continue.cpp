#include <iostream>

int main(){

    for (int i = 1; i <=111; i++){
        if (i == 6){
            std::cout << "continuing after 6\n";
            continue; // SKIPS the REST OF THIS ITERATION and proceeds to the next one. iteration
        }
        else if (i == 12){
            break;  // Terminates the loop immediately.
        }

        std::cout << i << '\n';
    }
    return 0;
}