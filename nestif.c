#include <stdio.h>

void main() {
    float com=0, sales_amt;
    char Grade;
    printf("\n Enter the Grade:\n");
    scanf("%c", &Grade);
    printf("\n Enter the sales Amount:\n");
    scanf("%f", &sales_amt);
    if(sales_amt>10000)
        if(Grade == 'A')
        com=sales_amt*0.1;
    else
        com=sales_amt*0.08;
    else
        com=sales_amt*0.05;
    printf("\n Commission=%f\n", com);
}
