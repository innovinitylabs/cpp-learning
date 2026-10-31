#include <iostream>

int main(){
    int grid[2][3] = {{0,2,3}, // 0th index row
                      {1,11,111} // 1st index row
                      // 0 1 2 index columns
                    };

    // instead of hardcoding values                
    //int rows = sizeof(grid) / sizeof(grid[0]);
    //int cols = sizeof(grid[0]) / sizeof(grid[0][0]);

    for (int row = 0; row < 2; row++){
        for (int col = 0; col < 3; col++){
            std::cout << grid[row][col] << ' ';
        }
        std::cout << '\n';
    }                
    

    return 0;
}