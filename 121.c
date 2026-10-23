// Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
#include <stdio.h>

int main() {
    char name[50];
    int age;
    FILE *file;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    file = fopen("info.txt", "w");

    fprintf(file, "Name: %s, Age: %d", name, age);

    fclose(file);

    printf("File created successfully! Data written to info.txt");

    return 0;
}
