#include <stdio.h>

main() {
    char ch;
    printf("\nEnter a lower cased alphabet (a-z):");
    scanf("%c", &ch);
    if(ch<'a'||ch>'z')
        printf("\nCharater not a lower cased alphabet\n");
    else
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("\nLast Alphabet (z) was entered\n");
                break;
                default:
                printf("\nCharacter is a consonant\n");
                break;
        }
               }
