/*
* Name : Nitesh Yadav
* Sap Id : 590043204
* Day : 37 Question : 73
* Date : 15-09-2026
*
* PROBLEM  STATEMENT :
* <Find the sum of each row of a matrix and store it in an array.>
*/
#include <stdio.h>

int main() {
    int rows, columns;
    int i, j;

    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];
    int sum[rows];

    // Input matrix
    for (i = 0; i < rows; i++) {
        sum[i] = 0;

        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
            sum[i] = sum[i] + matrix[i][j];
        }
    }

    // Print sum of each row
    for (i = 0; i < rows; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}
