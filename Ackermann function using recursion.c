#include <stdio.h>
int ack(int,int);
int main()
{
    int m,n;
    printf("Enter the value of 'm' and 'n' respectively: ");
    scanf("%d %d",&m,&n);
    printf("The Ackermann valueis: %d",ack(m,n));
    return 0;
}
int ack(int m,int n)
{
    if(m==0)
    {
        return n+1;
    }
    else if(n==0)
    {
        return ack(m-1,1);
    }
    else
    {
        return ack(m-1,ack(m,n-1));
    }
}