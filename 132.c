// Create an enum for months and print how many days each month has.
#include <stdio.h>
#include <string.h>

/* Enum for months */
typedef enum {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
} Month;

/* Returns the number of days description for each month */
const char* getDays(Month m) {
    switch (m) {
        case JAN: return "31 days";
        case FEB: return "28 or 29 days";
        case MAR: return "31 days";
        case APR: return "30 days";
        case MAY: return "31 days";
        case JUN: return "30 days";
        case JUL: return "31 days";
        case AUG: return "31 days";
        case SEP: return "30 days";
        case OCT: return "31 days";
        case NOV: return "30 days";
        case DEC: return "31 days";
        default:  return "Unknown month";
    }
}

/* Convert string to Month enum, returns 0 if invalid */
Month parseMonth(const char* name) {
    const char* names[] = {
        "JAN","FEB","MAR","APR","MAY","JUN",
        "JUL","AUG","SEP","OCT","NOV","DEC"
    };
    for (int i = 0; i < 12; i++) {
        if (strcmp(name, names[i]) == 0)
            return (Month)(i + 1);
    }
    return 0;
}

int main() {
    char input[10];
    printf("Enter month (e.g. JAN, FEB, ...): ");
    scanf("%9s", input);

    Month m = parseMonth(input);

    if (m == 0) {
        printf("Invalid month name!\n");
        return 1;
    }

    printf("%s\n", getDays(m));
    return 0;
}

