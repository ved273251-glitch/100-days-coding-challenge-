/*
* Name : Ved Pratap
* Sap Id : 590041856
* Day :  31 Question : 61
* Date : 09-09-2026
*
*  PROBLEM  STATEMENT :
*
* < Search for an element in an array using linear search.>
*/
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Element %d found in the array.\n", target);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

