#include <stdio.h>
int HCF(int a , int b)
{
    if(b==0)
    return a;
    return HCF(b,a%b);
}
int main()
{
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("HCF of %d and %d is %d\n",num1,num2,HCF(num1,num2));
    return 0;
}