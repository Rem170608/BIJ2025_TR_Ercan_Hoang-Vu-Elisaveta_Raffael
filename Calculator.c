#include <stdio.h>
#include "./headers/calc-f.h"




int main() {
    int a = 0, b = 0;
    char op = 0;
    char input[256];
    printf("Version \x1b[31m2.1.9\x1b[0m\n");
    printf("Welcome to the Calcinator 3000\n");
    printf("\x1b[4mSupported Operations\x1b[0m:\n");
    printf("\x1b[31m+ = Addition\x1b[0m\n");
    printf("\x1b[33m- = Subtraction\x1b[0m\n");
    printf("\x1b[32m* = Multiplication\x1b[0m\n");
    printf("\x1b[34m/ = Division\x1b[0m\n");
    printf("\x1b[35m^ = Exponentiation\x1b[0m\n");
    printf("\x1b[36mr = Square Root\x1b[0m\n");
    printf("\x1b[38m! = Factorial\x1b[0m\n");
        printf("Enter calculation (e.g. 2+3*4-5/2):\n");
        fgets(input, sizeof(input), stdin);


    int num = 0, next_num = 0;
    char curr_op = 0;
    int first = 1;
    char *p = input;
    while (*p) {
        while (*p == ' ' || *p == '\t') p++;
        if (sscanf(p, "%d", &next_num) == 1) {
            while (*p && (*p >= '0' && *p <= '9')) p++;
            // Check for factorial or root after number
            if (*p == '!') {
                printf("Factorial of %d is %llu\n", next_num, fakultaet(next_num));
                p++;
                first = 1; // reset for next input
                num = 0;
                continue;
            } else if (*p == 'r') {
                int res = root(next_num);
                if (res == -1)
                    printf("Error: Cannot calculate root of a negative number.\n");
                else
                    printf("Root of %d is %d\n", next_num, res);
                p++;
                first = 1;
                num = 0;
                continue;
            }
            if (first) {
                num = next_num;
                first = 0;
            } else {
                switch (curr_op) {
                    case '+': num = add(num, next_num); break;
                    case '-': num = subtract(num, next_num); break;
                    case '*': num = multiply(num, next_num); break;
                    case '/': num = divide(num, next_num); break;
                    case '^': num = exponentiate(num, next_num); break;
                    default: printf("Unsupported operation: %c\n", curr_op); return 1;
                }
            }
        }
        while (*p == ' ' || *p == '\t') p++;
        if (*p == '+' || *p == '-' || *p == '*' || *p == '/' || *p == '^') {
            curr_op = *p;
            p++;
        } else if (*p) {
            p++;
        }
    }
    printf("Final Result: %d\n", num);
    return 0;
}
