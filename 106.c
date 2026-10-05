// Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.
#include <stdio.h>

int main() {
    int n, i, j, greater;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        greater = -1;

        // Check elements on the right side
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                greater = arr[j];
                break;
            }
        }

        if (i > 0)
            printf(", ");

        printf("%d", greater);
    }

    return 0;
}
