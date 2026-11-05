// Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>
#include <string.h>

// Step 1: Define the enum
enum Status {
    SUCCESS = 0,
    FAILURE = 1,
    TIMEOUT = 2
};

int main() {
    char input[20];

    // Step 2: Take input from user
    printf("Enter status (SUCCESS / FAILURE / TIMEOUT): ");
    scanf("%s", input);

    // Step 3: Convert input string to enum value
    enum Status result;

    if (strcmp(input, "SUCCESS") == 0) {
        result = SUCCESS;
    } else if (strcmp(input, "FAILURE") == 0) {
        result = FAILURE;
    } else if (strcmp(input, "TIMEOUT") == 0) {
        result = TIMEOUT;
    } else {
        printf("Invalid input!\n");
        return 1;
    }

    // Step 4: Print message based on enum value
    switch (result) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }

    return 0;
}
