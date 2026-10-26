// Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc()
#include <stdio.h>

int main(void) {
    FILE *source, *destination;
    char sourceName[256], destinationName[256];
    int ch;

    printf("Enter source filename: ");
    if (scanf("%255s", sourceName) != 1)
        return 1;

    printf("Enter destination filename: ");
    if (scanf("%255s", destinationName) != 1)
        return 1;

    source = fopen(sourceName, "r");
    if (source == NULL) {
        perror("Could not open source file");
        return 1;
    }

    destination = fopen(destinationName, "w");
    if (destination == NULL) {
        perror("Could not open destination file");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        if (fputc(ch, destination) == EOF) {
            perror("Error copying file");
            fclose(source);
            fclose(destination);
            return 1;
        }
    }

    if (ferror(source)) {
        perror("Error reading source file");
        fclose(source);
        fclose(destination);
        return 1;
    }

    fclose(source);
    if (fclose(destination) == EOF) {
        perror("Error closing destination file");
        return 1;
    }

    printf("File copied successfully to %s\n", destinationName);
    return 0;
}
