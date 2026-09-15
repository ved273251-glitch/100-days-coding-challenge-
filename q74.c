/*
* Name : Nitesh Yadav
* Sap Id : 590043204
* Day : 37 Question : 74
* Date : 15-09-2026
*
* PROBLEM  STATEMENT :
* <Find the transpose of a matrix.>
*/
#include <stdio.h>

int main() {
    int rows, columns;
    int i, j;

    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];
  
       for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

        for (j = 0; j < columns; j++) {
        for (i = 0; i < rows; i++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


