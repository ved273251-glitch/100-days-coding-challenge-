//  Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>

int main(void) {
    int nums[] = {1, 2, 3, 4};
    int size = 4;
    int answer[4];

    int leftProduct = 1;
    for (int i = 0; i < size; i++) {
        answer[i] = leftProduct;
        leftProduct = leftProduct * nums[i];
    }

    int rightProduct = 1;
    for (int i = size - 1; i >= 0; i--) {
        answer[i] = answer[i] * rightProduct;
        rightProduct = rightProduct * nums[i];
    }
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", answer[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
