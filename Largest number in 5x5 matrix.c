#include <stdio.h>
int main()
{
    int matrix [5][5] , i ,j,max;
    printf("Enter 25 elements for the 5x5 matrix: ");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    max = matrix[0][0];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(matrix[i][j]>max)
            {
                max = matrix[i][j];
            }
        }
    }
    printf("The largest number in the matrix is:%d\n",max);
    return 0;
}