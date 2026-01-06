#include <stdio.h>
int main()
{
    int i,n,ctr = 0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            ctr++;
        }
    }
    if(ctr==2)
    {
        printf("The number is a prime number");
    }
    else
    {
        printf("The number is not a prime number");
    }
    return 0;
}