/*
* Name : Ved Pratap
* Sap Id : 590041856
* Day : 34 Question : 68
* Date : 12-09-2026
*
* PROBLEM  STATEMENT :
* < Delete an element from an array.>
*/
#include <stdio.h>

int main() {
    int arr[100];
    int n, pos;
    int i;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n = n - 1;

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
