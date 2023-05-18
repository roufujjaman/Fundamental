#include <stdio.h>
int main()
{
    int row = 3, col = 3;
    int arr2D[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr2D[i][j]);
        }
    }
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr2D[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count == (row * col))
    {
        printf("Zero Matrix");
    }
    else
    {
        printf("Not Zero Matrix");
    }
    return 0;
}