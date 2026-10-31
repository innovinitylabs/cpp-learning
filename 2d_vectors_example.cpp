
#include <iostream>

int main() {
    // A two-dimensional array with 2 rows and 3 columns.
    // Row 0 contains: 0, 2, 3
    // Row 1 contains: 1, 11, 111
    int grid[2][3] = {
        {0, 2, 3},
        {1, 11, 111}
    };

    // sizeof() measures memory size in bytes, not the number of elements.
    //
    // sizeof(grid) gives the size of the entire array.
    // sizeof(grid[0]) gives the size of one row.
    //
    // Dividing the total size by one row's size gives the number of rows.
    int rows = sizeof(grid) / sizeof(grid[0]);

    // sizeof(grid[0]) gives the size of one row.
    // sizeof(grid[0][0]) gives the size of one integer.
    //
    // Dividing the row's size by one integer's size gives the number
    // of columns in each row.
    int cols = sizeof(grid[0]) / sizeof(grid[0][0]);

    std::cout << "Number of rows: " << rows << '\n';
    std::cout << "Number of columns: " << cols << "\n\n";

    // Use nested loops to visit every element in the array.
    //
    // The outer loop selects each row.
    // The inner loop visits each column in the selected row.
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            // grid[row][col] accesses an element using its row and column.
            std::cout << grid[row][col] << ' ';
        }

        // Move to the next line after printing one complete row.
        std::cout << '\n';
    }

    std::cout << "\nUsing range-based for loops:\n";

    // A range-based for loop visits each element without requiring
    // us to manage an index manually.
    //
    // auto lets the compiler determine the type of row.
    // & makes row a reference to the existing row, avoiding a copy.
    // const prevents us from modifying the row through this reference.
    for (const auto& row : grid) {

        // The inner loop visits each integer in the current row.
        //
        // int value receives a copy of each integer.
        // Changing value would not change the original array.
        for (int value : row) {
            std::cout << value << ' ';
        }

        // Move to the next line after printing the current row.
        std::cout << '\n';
    }

    return 0;
}
