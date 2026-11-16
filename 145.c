// Return a structure containing top student's details from a function.
#include <stdio.h>
#include <string.h>

// Define the Student structure
struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to find and return top student
struct Student getTopStudent(struct Student students[], int n) {
    struct Student top = students[0];
    
    for (int i = 1; i < n; i++) {
        if (students[i].marks > top.marks) {
            top = students[i];
        }
    }
    
    return top;
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    struct Student students[n];
    
    // Input student details
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number, and marks of student %d: ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }
    
    // Get top student using function
    struct Student top = getTopStudent(students, n);
    
    // Display result
    printf("\nTop Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll, top.marks);
    
    return 0;
}
