// Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    int i, j, k;

    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (k = 0; k < rows + cols - 1; k++) {
        for (i = 0; i < rows; i++) {
            j = k - i;

            if (j >= 0 && j < cols) {
                printf("%d ", matrix[i][j]);
            }
        }
    }

    return 0;
}

