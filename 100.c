// Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int len = strlen(str);
    int first = 1;

    // Generate substrings using two pointers for start and end indices.
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (!first) {
                printf(",");
            }
            first = 0;

            // Print characters from index i to j
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
        }
    }
    printf("\n");

    return 0;
}
