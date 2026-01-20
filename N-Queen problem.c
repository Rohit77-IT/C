#include <stdio.h>
#define N 4
void PrintBoard(int board[N][N])
{
    for(int i = 0;i<N;i++)
    {
        for(int j =0;j<N;j++)
        printf("%c",board[i][j]? 'Q' : '.');
        printf("\n");
    }
    printf("\n");
}
int issafe(int board[N][N],int row,int col)
{
    for(int i = 0;i<row;i++)
    if(board[i][col])
    return 0;
    for(int i = row,j=col ; i>=0 && j>=0 ; i--,j--)
    if(board[i][j])
    return 0;
    for(int i = row,j=col ;i>=0 && j<N ; i--,j++)
    if(board[i][j])
    return 0;
    return 1;
}
int solveNQueen(int board[N][N],int row)
{
    if(row == N)
    {
        PrintBoard(board);
        return 1;
    }
    for(int col = 0;col<N;col++)
    {
        if(issafe(board,row,col))
        {
            board[row][col] = 1;
            solveNQueen(board,row+1);
            board[row][col] = 0;
        }
    }
    return 0;
}
int main()
{
    int board [N][N] = {0};
    solveNQueen(board,0);
    return 0;
}