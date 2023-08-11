#include <stdio.h>

#define MAX_ROWS 60
#define MAX_COLS 59

void printVShapePattern(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int midCol = cols / 2;
    int i, j;

    // Print the first half of the V shape
    for (i = 0; i < cols / 2; i++) {
        
        printf("%d ", matrix[i][i]);
    }

    // Print the middle element of the V shape
    printf("%d ", matrix[midCol][midCol]);

    // Print the second half of the V shape
    for (i = (midCol)-1, j = (midCol)+1; i>=0; i--, j++) {
        printf("%d ", matrix[i][j]);
    }
}

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;
    int i, j;

    // Read the size of the matrix
    scanf("%d %d", &rows, &cols);

    // Read the matrix elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the number of columns is odd
    if (cols % 2 == 0) {
        printf("The number of columns must be odd.\n");
        return 0;
    }

    // Print the V shape pattern
    printVShapePattern(matrix, rows, cols);

    return 0;
}
