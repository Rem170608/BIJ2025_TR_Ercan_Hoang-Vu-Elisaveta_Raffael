#include <stdio.h>

int main() {
    char mode[10];
    printf("Version \x1b[31m1.5\x1b[0m\n");
    printf("Welcome to the Calcinator 3000\n");
    printf("\x1b[4mSupported Operations\x1b[0m:\n");
    printf("\x1b[31m+ = Addition\x1b[0m\n");
    printf("\x1b[33m- = Subtraction\x1b[0m\n");
    printf("\x1b[32m* = Multiplication\x1b[0m\n");
    printf("\x1b[34m/ = Division\x1b[0m\n");
    printf("Enter your calculation:\n");
    scanf("%s", mode);
    printf("You chose: %s\n", mode);
    return 0;
}
