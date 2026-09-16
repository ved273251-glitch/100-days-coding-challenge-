/*
* Name : Ved Pratap
* Sap Id : 590041856
* Day : 38 Question : 76
* Date : 16-09-2026
*
* PROBLEM  STATEMENT :
* <Check if a matrix is symmetric.>
*/
#include <stdio.h>

int main() {
    int n;
    int matrix[100][100];
    int symmetric = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric == 1)
        printf("True");
    else
        printf("False");

    return 0;
}
