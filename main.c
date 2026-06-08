#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = (int) sizeof(matrix) / sizeof(matrix[0]);
    int cols = (int) sizeof(matrix[0]) / sizeof(matrix[0][0]);

    for (int i = 0; i < rows; i++) {
        
        for (int j = 0; j < cols; j++) {

            (j == cols - 1) ? printf("%d", matrix[i][j]) : printf("%d | ", matrix[i][j]);
        }

        (i == rows - 1) ? printf("\n") : printf("\n----------\n");
    }
    
    return 0;
}
