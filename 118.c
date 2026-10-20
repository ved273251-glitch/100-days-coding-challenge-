// Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main() {
    int n;
    int numbers[100];
    int sum = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum = sum + numbers[i];
    }
    int total = n * (n + 1) / 2;

    printf("%d\n", total - sum);

    return 0;
}

