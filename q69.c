/*
* Name : Ved Pratap
* Sap Id : 590041856
* Day : 35 Question : 69
* Date : 12-09-2026
*
* PROBLEM  STATEMENT :
* < Find the second largest element in an array.>
*/
#include <stdio.h>

int main() {
    int n, i;
    int a[100];
    int largest, second;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    second = a[0];

    for(i = 1; i < n; i++) {
        if(a[i] > largest) {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    printf("%d", second);

    return 0;
}
