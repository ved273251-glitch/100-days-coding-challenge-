#include <stdio.h>
int main() {
    int rows, columns;
    int i, j;

    
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];

    
    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    printf("Sum of each row:\n");
    for (i = 0; i < rows; i++) {
        int rowSum = 0;
        for (j = 0; j < columns; j++) {
            rowSum += matrix[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, rowSum);
    }

   
    printf("Sum of each column:\n");
    for (j = 0; j < columns; j++) {
        int colSum = 0;
        for (i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        printf("Column %d sum = %d\n", j + 1, colSum);
    }

    return 0;
}
