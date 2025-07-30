//This C program has only says congratulations to the person who chooses the correct number between 1 and 100
//Try the most common number (this number is used by many)
//The game allows you to make only one guess, so take your time.

#include <stdio.h>

int main()
{
    int a;
    printf("Guess the number between 1 to 100, you will get hints!\n");
    printf("Enter your guess : \n");
    scanf("%d", &a);
    if(a==37)
    {
        printf("Your guess is correct! Congratulations!\n");
    }
    else if(a >= 1 && a<=33)
    {
        printf("You were close if you typed 33. Otherwise higher guess!\n");
    }
    else
    {
        printf("Lower you guess number!\n");
    }
    return 0;
}