//This program does some mathemetical stuffs with your inputs.

#include <stdio.h>

int main()
{
    float a,b,sum,diff,mult,div;
    printf("Enter the two inputs: \n");
    scanf("%f%f", &a, &b);
    
    sum = a+b;
    diff = a-b;
    mult = a * b;
    div = a / b;

    printf("The sum is %f \n", sum);
    printf("The difference is %f \n", diff);
    printf("Multiplying these two %f \n", mult);
    printf("Dividing a by b %f \n", div);
    return 0;
}