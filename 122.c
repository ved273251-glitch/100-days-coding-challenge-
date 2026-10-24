#include <stdio.h>

int main(void)
{
    FILE *file;
    char line[100];

    /* info.txt file banao aur usmein text likho */
    file = fopen("info.txt", "w");

    if (file == NULL)
    {
        printf("File nahi ban payi.\n");
        return 1;
    }

    fprintf(file, "Name: Rahul\n");
    fprintf(file, "Age: 23\n");
    fclose(file);

    /* info.txt ko dobara kholo aur fgets() se padho */
    file = fopen("info.txt", "r");

    if (file == NULL)
    {
        printf("File nahi khul payi.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}


