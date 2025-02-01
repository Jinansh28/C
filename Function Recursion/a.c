#include <stdio.h>
#include <string.h>
int main() {
    char str[100], ch;
    printf("Enter a string: ");
    gets(str);
    //   fgets(str, sizeof(str), stdin);
    
    //  str[strcspn(str, "\n")] = '\0';

    printf("Enter the character to remove: ");
    scanf("%c", &ch);
    int  x = 0;
   char a[100];
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] != ch) {
            a[x] = str[i];
            x++;
        }
    }
    printf("Modified string: %s\n", a);

    return 0;
}
