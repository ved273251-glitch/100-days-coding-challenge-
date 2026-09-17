/*
* Name : Ved Pratap
* Sap Id : 590041856
* Day : 39 Question : 78
* Date : 17-09-2026
*
* PROBLEM  STATEMENT :
* <Find the sum of main diagonal elements for a square matrix.>
*/
#include <stdio.h>

int main() {
    int rows, columns;
    int i, j, sum = 0;

    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];

    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (i = 0; i < rows; i++) {
        sum = sum + matrix[i][i];
    }

    printf("%d", sum);

    return 0;
}
