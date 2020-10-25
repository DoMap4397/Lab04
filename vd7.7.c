#include <stdio.h>

void main() {
    int x, y;
    x=y=0;
    printf("Enter Choise (1-3):");
    scanf("%d", &x);
          if(x==1)
          {
              printf("\nEnter value for u(1-5):");
              scanf("%d", &y);
              if (y<=5)
                  printf("\nThe value for y is: %d\n", y);
              else
                  printf("\nThe value of y exceeds 5\n");
          }
                else
                    printf("\nChoise entersd was not 1\n");
    }
