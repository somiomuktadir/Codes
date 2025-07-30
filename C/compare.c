//This C program compares two user input numbers

#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a, &b);

    if(a==b)
    {
        printf("The numbers are equal!\n");
    }
    else
    {
        if(a>b)
        {
            printf("%d is greater than %d \n", a, b);
        }
        else
        {
            printf("%d is smaller than %d \n", a, b);
        }
    }
    return 0;
}
