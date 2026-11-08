// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>
#include <string.h>

// Define enum for user roles
typedef enum {
    ADMIN,
    USER,
    GUEST
} Role;

// Function to get role from string input
Role getRole(const char *roleStr) {
    if (strcmp(roleStr, "ADMIN") == 0) return ADMIN;
    if (strcmp(roleStr, "USER") == 0)  return USER;
    if (strcmp(roleStr, "GUEST") == 0) return GUEST;
    return -1; // Invalid role
}

// Function to display message based on role
void displayMessage(Role role) {
    switch (role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Unknown role!\n");
    }
}

int main() {
    char input[20];

    printf("Enter role (ADMIN / USER / GUEST): ");
    scanf("%s", input);

    Role role = getRole(input);

    if (role == -1) {
        printf("Invalid role entered!\n");
    } else {
        displayMessage(role);
    }

    return 0;
}
