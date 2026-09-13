/*
* Name : Ved Pratap
* Sap Id : 590041856
* Day : 35 Question : 70
* Date : 12-09-2026
*
* PROBLEM  STATEMENT :
* < Rotate an array to the right by k positions.>
*/
#include <stdio.h>

int main() {
    int n, k, i;
    int a[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    k = k % n;

    for(i = 0; i < k; i++) {
        int last = a[n - 1];

        for(int j = n - 1; j > 0; j--) {
            a[j] = a[j - 1];
        }

        a[0] = last;
    }

    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
