#include <stdio.h>

int main()
{
    int i, j, n, a;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n - i; j++)
        {
            printf("   ");
        }

        a = i;
        for(j = 1; j <= i; j++)
        {
            printf(" %d ", a);
            a++;
        }
        a = a - 2;
        for(j = 1; j < i; j++)
        {
            printf(" %d ", a);
            a--;
        }

        printf("\n");
    }
    return 0;
}