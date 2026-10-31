#include <iostream>
#include <string>

void change(int& n){
    n = 111;
    // when this function is called with a parameter 
    // the veriabl which is passed as parameter changes to n
}

int main() {

    int x = 11;
    change(x);
    std::cout << x << " <- x is now updated \n" ;

    return 0;
}