// Print all enum names and integer values using a loop.
#include <stdio.h>

typedef enum {
    RED = 0,
    YELLOW = 1,
    GREEN = 2
} Color;

int main() {
    const char *colorNames[] = {"RED", "YELLOW", "GREEN"};
    int total = GREEN + 1;
    for (int i = 0; i < total; i++) {
        printf("%s=%d\n", colorNames[i], i);
    }
    
    return 0;
}

