/*
* Name : Ved Pratap
* Sap Id : 590041856
* Day : 29 Question : 58
* Date : 07-09-2026
*
* PROBLEM  STATEMENT :
*
* < Find the maximum and minimum element in an array.>
*/
#include <stdio.h>
int main()
{
    int n, i, max, min;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0]; // Initialize max with the first element
    min = arr[0]; // Initialize min with the first element
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i]; // Update max if current element is greater
        }
        if (arr[i] < min)
        {
            min = arr[i]; // Update min if current element is smaller
        }
    }
    printf("The maximum element in the array is: %d\n", max);
    printf("The minimum element in the array is: %d\n", min);
    return 0;
}
