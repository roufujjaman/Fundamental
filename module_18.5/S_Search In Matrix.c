#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr2D[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr2D[i][j]);
        }
    }
    int inputVal;
    scanf("%d", &inputVal);
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr2D[i][j] == inputVal)
            {
                count++;
            }
        }
    }
    if (count > 0)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }
    return 0;
}