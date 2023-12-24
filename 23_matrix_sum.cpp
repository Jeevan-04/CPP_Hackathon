#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

int main() {
    int matrix[ROWS][COLS] = {{1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9}};

    for (int i = 0; i < ROWS; i++) {
        int row_sum = 0;
        for (int j = 0; j < COLS; j++) {
            row_sum += matrix[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << row_sum << endl;
    }

    return 0;
}
