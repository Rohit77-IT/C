#include <stdio.h>
double factorial(int n)
{
    double fact = 1.0;
    for(int i = 1; i<=n ;i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Invalid number\n");
    }
    else
    {
        printf("Factorial of %d is %.0lf\n",num,factorial(num));
    }
    return 0;
}