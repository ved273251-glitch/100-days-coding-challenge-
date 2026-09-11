/*
* Name : Ved Pratap
* Sap Id : 590041856
* Day : 33 Question : 66
* Date : 11-09-2026
*
* PROBLEM  STATEMENT :
* < Insert an element in a sorted array at the appropriate position.>
*/
#include <stdio.h>

int main() {
    int n, i, element;

    scanf("%d", &n);

    int arr[n + 1];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    
    i = n - 1;

    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    
    arr[i + 1] = element;
    n++;


    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


