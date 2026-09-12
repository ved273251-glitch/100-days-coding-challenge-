/*
* Name : Ved Pratap
* Sap Id : 590041856
* Day : 34 Question : 67
* Date : 12-09-2026
*
* PROBLEM  STATEMENT :
* < Insert an element in an array at a given position.>
*/
#include <stdio.h>

int main() {
    int arr[100];
    int n, pos, value;
    int i;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &pos, &value);

    for(i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;

    n = n + 1;

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

