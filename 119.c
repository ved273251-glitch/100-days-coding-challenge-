// Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n;
    int nums[100];
    int seen[1000] = {0};

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);

        if (seen[nums[i]] == 1) {
            printf("%d\n", nums[i]);
            return 0;
        }

        seen[nums[i]] = 1;
    }

    return 0;
}
