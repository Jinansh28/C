#include <stdio.h>

int main() {
    int number;
    printf("Enter a number (0-7): ");
    scanf("%d", &number);
    switch (number) {
        case 0:
            printf("Violet\n");
            break;
        case 1:
            printf("Indigo\n");
            break;
        case 2:
            printf("Blue\n");
            break;
        case 3:
            printf("Green\n");
            break;
        case 4:
            printf("Yellow\n");
            break;
        case 5:
            printf("Orange\n");
            break;
        case 6:
            printf("Red\n");
            break;
        default:
            printf("No colors to display.\n");
            break;
    }
    return 0;
}