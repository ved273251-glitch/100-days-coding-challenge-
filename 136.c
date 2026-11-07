// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>

enum Operation {
    ADD = 1,
    SUBTRACT = 2,
    MULTIPLY = 3
};

int main() {
    char choice[20];       // stores operation name as text
    int num1, num2;
    int result;
    

    scanf("%s %d %d", choice, &num1, &num2);
    
    enum Operation op;
    
    if (choice[0] == 'A' && choice[1] == 'D') {
        op = ADD;
    } else if (choice[0] == 'S') {
        op = SUBTRACT;
    } else if (choice[0] == 'M') {
        op = MULTIPLY;
    }
    
    switch (op) {
        case ADD:
            result = num1 + num2;
            printf("%d\n", result);
            break;
            
        case SUBTRACT:
            result = num1 - num2;
            printf("%d\n", result);
            break;
            
        case MULTIPLY:
            result = num1 * num2;
            printf("%d\n", result);
            break;
            
        default:
            printf("Invalid operation!\n");
    }
    
    return 0;
}

