#include <stdio.h>

void main() {
    int Num1, Num2, res;
    char op;
    Num1=90;
    Num2=33;
    op='-';
    switch (op) {
        case '+':
            res=Num1+Num2;
            printf("\nThe Sum is:%d\n", res);
            break;
        case '-':
            res=Num1-Num2;
            printf("\n nNumber after Subtraction: %d\n", res);
        case '/':
            res=Num1/Num2;
            printf("\n nNumber after Division: %d\n", res);
        case '*':
            res=Num1*Num2;
            printf("\n nNumber after Multiplication: %d\n", res);
        default:
            printf("\nInvalid");
            break;
    }
}
