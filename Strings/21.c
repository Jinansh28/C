#include <stdio.h>

int main() {
    int game;
    printf("Enter the number representing games won: (0-7): ");
    scanf("%d", &game);
    if (game >= 5) {
        printf("The college is awarded the Champion of Champions trophy!\n");
    } else {
        printf("The college did not win the Champion of Champions trophy.\n");
    }
    return 0;
}
