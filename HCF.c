#include <stdio.h>
int main()
{
    int a,b,i,hcf;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i == 0 && b%i == 0)
        {
            hcf = i;
        }
    }
    printf("Hcf of %d and %d is %d",a,b,hcf);
    return 0;
}