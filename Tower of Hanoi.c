#include<stdio.h>
void TOH(int n,char fromrod,char torod,char auxrod)
{
    if(n==1)
    {
        printf("THe disk 1 has been moved from %c rod to %c rod\n",fromrod,torod);
        return;
    }
    TOH(n-1,fromrod,auxrod,torod);
    printf("THe disk %d has been moved from %c rod to %c rod\n",n,fromrod,torod);
    TOH(n-1,auxrod,torod,fromrod);
}
int main()
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    TOH(n,'A','B','C');
    return 0;
}