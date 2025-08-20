#include <stdio.h>

int main() {
    char mode[10];
    printf("Version \x1b[31m1.2\x1b[0m\n");
    printf("Welcome to the Calcinator 3000\n");
    printf("\x1b[4mPlease choose an operation\x1b[0m:\n");
    printf("\x1b[31mA = Addition\x1b[0m\n");
    printf("\x1b[33ms = Subtraction\x1b[0m\n");
    printf("\x1b[32mM = Multiplication\x1b[0m\n");
    printf("\x1b[34mD = Division\x1b[0m\n");
    printf("Enter your choice: ");
    scanf("%s", mode);
    printf("You chose: %s\n", mode);
    return 0;
}
