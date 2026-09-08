/*
* Name : Ved Pratap
* Sap Id : 590041856
* Day : 30 Question : 60
* Date : 08-09-2026
*
* PROBLEM  STATEMENT :
* <Count positive, negative, and zero elements in an array.>
*/

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zero numbers: %d\n", zero);

    return 0;
}
