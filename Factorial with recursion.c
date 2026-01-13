#include <stdio.h>
double factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1.0;
    }
    return n * factorial(n-1);
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