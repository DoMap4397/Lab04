#include <stdio.h>

void main() {
    char c;
    printf("Please enter a character:");
    scanf("%c", &c);
    if(c>='A'&&c<='Z')
        printf("Lowercase character=%c\n", c+'a'-'A');
    else
        printf("Charracter Entered is=%c\n", c);
}
