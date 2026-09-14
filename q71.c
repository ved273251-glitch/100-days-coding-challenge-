/*
* Name : Ved Pratap
* Sap Id : 590041856
* Day : 36 Question : 71
* Date : 14-09-2026
*
* PROBLEM  STATEMENT :
* <Read and print a matrix.>
*/
#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[10][10];

    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
