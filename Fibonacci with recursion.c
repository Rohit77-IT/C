#include<stdio.h>
void fibonacci(int a,int b,int n)
{
    if(n>0)
    {
        printf("%d ",a);
        fibonacci(b,a+b,n-1);
    }
}
int main()
{
    int num;
    printf("Enter the number of terms: ");
    scanf("%d",&num);
    if(num<=0)
    {
        printf("Please enter a valid number\n");
    }
    else
    {
        printf("Fibonacci series: ");
        fibonacci(0,1,num);
        printf("\n");
    }
    return 0;
}