// A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main() {
    FILE *fp;
    int num;
    int sum = 0;
    int count = 0;
    float average;

    fp = fopen("numbers.txt", "r");

    while (fscanf(fp, "%d", &num) == 1) {
        sum = sum + num;
        count = count + 1;
    }

    fclose(fp);

    average = sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
