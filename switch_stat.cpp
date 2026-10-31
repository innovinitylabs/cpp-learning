#include <iostream>

int main(){
    int choice = 0;

    std::cout << "enter choice: " << '\n';
    std::cin >> choice;

    switch(choice){
        case 1:
         std::cout << "you choose ONE" << '\n';
         break; // Prevents execution from falling through into the next case or default.
        
         case 2:
         std::cout << "you choose TWO" << '\n';
         break; // Prevents execution from falling through into the next case or default.

        default:
         std::cout << "you cant choose that mate" << '\n';
    }
}