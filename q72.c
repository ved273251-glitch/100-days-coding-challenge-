/*
* Name : Ved Pratap
* Sap Id : 590041856
* Day : 36 Question : 72
* Date : 14-09-2026
*
* PROBLEM  STATEMENT :
* <Find the sum of all elements in a matrix.>
*/
#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[10][10];
    int sum = 0;

    scanf("%d %d", &rows, &cols);

    // Read matrix and calculate sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}
