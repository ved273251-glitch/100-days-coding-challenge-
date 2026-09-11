/*
* Name : Ved Pratap
* Sap Id : 590041856
* Day : 33 Question : 65
* Date : 11-09-2026
*
* PROBLEM  STATEMENT :
* < Insert an element in a sorted array at the appropriate position.>
*/
#include <stdio.h>

int main() {
    int n, i, key;
    
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    int low = 0;
    int high = n - 1;
    int found = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = mid;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found != -1)
        printf("Found at index %d", found);
    else
        printf("-1");

    return 0;
}
