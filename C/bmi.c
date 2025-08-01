//This BMI calculator takes only Standard measures
//h denoted height, w denotes weight and bmi stands for body mass index

#include <stdio.h>

int main()
{
    float w,h,bmi;
    printf("Enter your weight and height:\n");
    scanf("%f%f", &w,&h);
    bmi = w/ (h*h);
    printf("Your BMI is : %f \n", bmi);
    
    if(bmi<18.5)
    {
        printf("You are underweight\n");
    }
    else if(bmi>=18.5 && bmi<=24.9)
    {
        printf("Your BMI is normal\n");
    }
    else if(bmi>=25 && bmi<=29.9)
    {
        printf("You are overweight\n");
    }
    else
    {
        printf("You are obese\n");
    }
    return 0;

}