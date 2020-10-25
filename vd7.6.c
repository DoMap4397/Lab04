#include <stdio.h>

main() {
    int x;
    x=0;
    printf("Enter Choice (1-3):");
    scanf("%d",&x);
    if(x==1)
        printf("\nChoise is 1\n");
    else if(x==2)
        printf("\nChoise is 2\n");
    else if(x==3)
        printf("\nChoise is 3\n");
    else
        printf("\nInvalid Choise: Incalid Choise\n");
    }

