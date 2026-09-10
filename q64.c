/*
* Name : Ved Pratap
* Sap Id : 590041856
* Day : 32 Question : 64
* Date : 10-09-2026
*
* PROBLEM  STATEMENT :
*
* <Find the digit that occurs the most times in an integer number.>
*/
#include <stdio.h>
int main() {
    int n, max_count = 0, max_digit = -1;
    printf("Enter an integer: ");
    scanf("%d", &n);


    if (n < 0) {
        n = -n;
    }

    
    if (n == 0) {
        printf("The digit that occurs the most times is 0.\n");
        return 0;
    }

    int count[10] = {0};


    while (n > 0) {
        int digit = n % 10;
        count[digit]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            max_digit = i;
        }
    }

    printf("The digit that occurs the most times is %d.\n", max_digit);
    return 0;
}