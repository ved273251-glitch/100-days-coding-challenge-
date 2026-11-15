// Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

// Define the Student structure
struct Student {
    char name[50];
    int roll;
    float marks;
};
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s;

    // Input
    printf("Enter Name, Roll, and Marks: ");
    scanf("%s %d %f", s.name, &s.roll, &s.marks);

    // Print using function
    printStudent(s);

    return 0;
}
