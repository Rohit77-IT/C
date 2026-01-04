#include <stdio.h>
int main()
{
    float number;
    printf("Enter your number to obtain the grade: ");
    scanf("%f",&number);
    if(number>=90 && number<=100)
    {
        printf("Your grade is O\n");
    }
    else if(number>=80 && number<=89)
    {
        printf("Your grade is E\n");
    }
    else if(number>=70 && number<=79)
    {
        printf("Your grade is A\n");
    }
    else if(number>=60 && number<=69)
    {
        printf("Your grade is B\n");
    }
    else if(number>=50 && number<=59)
    {
        printf("Your grade is C\n");
    }
    else if(number>=40 && number<=49)
    {
        printf("Your grade is D\n");
    }
    else if(number>=0 && number<=39)
    {
        printf("Your grade is F\n");
    }
    else
    {
        printf("Invalid number entered.\n");
    }
    return 0;
}