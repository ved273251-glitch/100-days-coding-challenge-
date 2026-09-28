// Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main() {
    int day, month, year;

    if (scanf("%d/%d/%d", &day, &month, &year) == 3) {
    
        printf("%02d-Apr-%04d\n", day, year);
    }

    return 0;
}


