// Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

// Nested Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Employee structure with nested Date
struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;  // nested structure
};

int main() {
    struct Employee emp;

    // Input employee details
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    // Display result
    printf("\nName: %s | ID: %d | Joining Date: %02d/%02d/%d\n",
           emp.name,
           emp.id,
           emp.joiningDate.day,
           emp.joiningDate.month,
           emp.joiningDate.year);

    return 0;
}
