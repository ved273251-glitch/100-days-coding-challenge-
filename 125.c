// Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *file = fopen("data.txt", "a");
    char text[1024];

    if (file == NULL) {
        perror("Could not open data.txt");
        return 1;
    }

    printf("Enter a line of text to append: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        fclose(file);
        return 1;
    }

    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    if (size > 0) {
        FILE *reader = fopen("data.txt", "r");
        if (reader != NULL) {
            fseek(reader, -1, SEEK_END);
            int last_char = fgetc(reader);
            fclose(reader);

            if (last_char != '\n') {
                fputc('\n', file);
            }
        }
    }
    text[strcspn(text, "\n")] = '\0';
    fprintf(file, "%s\n", text);

    if (fclose(file) != 0) {
        perror("Could not finish writing data.txt");
        return 1;
    }

    printf("File updated successfully with appended text.\n");
    return 0;
}


