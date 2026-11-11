// Define a struct with enum Gender and print person's gender.
#include <stdio.h>
#include <string.h>

// Define enum for Gender
typedef enum {
    MALE,
    FEMALE,
    OTHER
} Gender;

// Define struct for Person
typedef struct {
    char name[50];
    int age;
    Gender gender;
} Person;

// Function to print gender
void printGender(Gender gender) {
    switch (gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
    }
}

// Function to get Gender from string input
Gender getGenderFromString(const char *str) {
    if (strcmp(str, "MALE") == 0)   return MALE;
    if (strcmp(str, "FEMALE") == 0) return FEMALE;
    return OTHER;
}

int main() {
    Person person;
    char genderInput[20];

    // Read input
    printf("Enter Gender (MALE/FEMALE/OTHER): ");
    scanf("%s", genderInput);

    // Assign gender to struct
    person.gender = getGenderFromString(genderInput);

    // Print the gender
    printGender(person.gender);

    return 0;
}
