// Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.>
#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; // Simple array to store numbers
    int total_sum = 0;
    int left_sum = 0;
    int right_sum = 0;
    int pivot_index = -1; // Default is -1 if not found

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total_sum = total_sum + arr[i];
    }

    for (i = 0; i < n; i++) {

        right_sum = total_sum - left_sum - arr[i];

        // If both sides match, we found our pivot!
        if (left_sum == right_sum) {
            pivot_index = i;
            break; // Stop looking because we only want the leftmost one
        }

        // Add current number to left_sum for the next turn
        left_sum = left_sum + arr[i];
    }

    printf("Pivot index: %d\n", pivot_index);

    return 0;
}

