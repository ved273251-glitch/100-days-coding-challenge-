/*
* Name : Ved Pratap
* Sap Id : 590041856
* Day : 30 Question : 59
* Date : 08-09-2026
*
* PROBLEM  STATEMENT :
* <Count even and odd numbers in an array.>
*/
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}

