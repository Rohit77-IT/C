#include <stdio.h>
int main()
{
    int n, i, j, odd;
    float f;
    float sum = 0.0;
    int sign = -1;
    
    printf("Enter number of terms: ");
    scanf("%d",&n);
    
    odd = 1;
    
    for (i=1; i<=n; i++)
    {
        f = 1;
        for(j=1; j<=odd; j++)
        {
            f = f * j;
        }
        sum += sign * (1.0/f);
        sign = -sign;
        odd += 2;
    }
    
    printf("Sumation of series = %f",sum);
    return 0;
}