#include <stdio.h>
int main()
{
    int matrix [4][4] ,transpose[4][4] , i ,j;
    printf("Enter 16 elements for the 4x4 matrix: ");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Transpose of the given matrix: \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        printf("%d ",transpose[i][j]);
        printf("\n");
    }
    return 0;
}