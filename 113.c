// Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int main(void) {
    int arr[] = {100, 200, 300, 400};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    if (k <= 0 || k > n) {
        printf("Invalid k\n");
        return 1;
    }

    int windowSum = 0;

    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    printf("%d\n", maxSum);
    return 0;
}
