// rite a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL)
        return 1;

    int capitalize_next = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace((unsigned char)str[i])) {
            capitalize_next = 1;
        } else if (capitalize_next) {
            str[i] = (char)toupper((unsigned char)str[i]);
            capitalize_next = 0;
        }
    }

    printf("%s", str);
    return 0;
}
