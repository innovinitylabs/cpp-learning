#include <iostream>

int main(){
    int grid[2][3] = {{0,2,3}, // 0th index row
                      {1,11,111} // 1st index row
                      // 0 1 2 index columns
                    };

    std::cout << grid[1][1] << '\n';

    return 0;
}