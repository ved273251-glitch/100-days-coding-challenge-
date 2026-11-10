// Show that enums store integers by printing assigned values.
#include <stdio.h>
enum Status {
    SUCCESS,   // 0 (default starts at 0)
    FAILURE,   // 1
    TIMEOUT    // 2
};

int main() {
    // Print the integer values stored by each enum constant
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n",
           SUCCESS, FAILURE, TIMEOUT);

    return 0;
}

