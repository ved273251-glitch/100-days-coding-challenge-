// write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h>

int main(void) {
    int arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    if (k <= 0 || k > n) {
        printf("Invalid value of k\n");
        return 1;
    }

    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];

        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }

        printf("%d ", max);
    }

    printf("\n");
    return 0;
}
