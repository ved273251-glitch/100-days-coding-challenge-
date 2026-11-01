// Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
#include <string.h>

int main()
{
    char name[5][50];
    int roll[5];
    int marks[5];
    int n, i;

    FILE *fp;

    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter name of student %d: ", i+1);
        scanf("%s", name[i]);

        printf("Enter roll number of student %d: ", i+1);
        scanf("%d", &roll[i]);

        printf("Enter marks of student %d: ", i+1);
        scanf("%d", &marks[i]);
    }

    fp = fopen("students.txt", "w");
    for(i = 0; i < n; i++)
    {
        fprintf(fp, "%s %d %d\n", name[i], roll[i], marks[i]);
    }

    fclose(fp);

    printf("\nData written to file successfully!\n");

    fp = fopen("students.txt", "r");

    printf("\nReading from file:\n");
    printf("\n");

    for(i = 0; i < n; i++)
    {
        fscanf(fp, "%s %d %d", name[i], &roll[i], &marks[i]);

        printf("Name: %s | Roll: %d | Marks: %d\n", name[i], roll[i], marks[i]);
    }

    fclose(fp);

    return 0;
}

