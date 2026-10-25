// Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>

int main(void)
{
    FILE *file;
    int ch;
    int characters = 0;
    int words = 0;
    int lines = 0;
    int insideWord = 0;
    int lineHasText = 0;

    /* sample.txt banao aur usmein sample text likho */
    file = fopen("sample.txt", "w");

    if (file == NULL)
    {
        printf("Could not create sample.txt\n");
        return 1;
    }

    fprintf(file, "Hello world\n");
    fprintf(file, "This is C programming");
    fclose(file);

    /* Ab sample.txt ko padhne ke liye kholo */
    file = fopen("sample.txt", "r");

    if (file == NULL)
    {
        printf("Could not open sample.txt\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        if (ch == '\n')
        {
            lines++;
            lineHasText = 0;
        }
        else
        {
            lineHasText = 1;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            insideWord = 0;
        }
        else if (insideWord == 0)
        {
            words++;
            insideWord = 1;
        }
    }

    if (lineHasText == 1)
    {
        lines++;
    }

    fclose(file);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
