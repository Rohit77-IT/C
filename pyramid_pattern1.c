#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    char ch = 'a';
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",ch+j);
        }
        printf("\n");
    }
    return 0;
}