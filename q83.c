// Count vowels and consonants in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u') {
            vowels++;
        }
        else {
            consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}
