/*
* Name : Ved Pratap
* Sap Id : 590041856
* Day :  29 Question : 57
* Date : 07-08-2026
*
* PROBLEM  STATEMENT :
*
* <Find the sum of array elements.>
*/
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Calculate sum while reading elements
    }
    printf("The sum of the array elements is: %d\n", sum);
    return 0;
}
