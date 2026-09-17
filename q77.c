/*
* Name : Ved Pratap
* Sap Id : 590041856
* Day : 39 Question : 77
* Date : 17-09-2026
*
* PROBLEM  STATEMENT :
* <Check if the elements on the diagonal of a matrix are distinct.>
*/
#include <stdio.h>

int main() {
    int rows, columns;
    int i, j;
    int distinct = 1;

    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];

    // Input matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check diagonal elements
    for (i = 0; i < rows; i++) {
        for (j = i + 1; j < rows; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
            }
        }
    }

    if (distinct == 1)
        printf("True");
    else
        printf("False");

    return 0;
}

