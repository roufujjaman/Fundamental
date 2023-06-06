#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr2D_One[row][col];
    int arr2D_Two[row][col];
    int arr2D_Sum[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr2D_One[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr2D_Two[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr2D_Sum[i][j] = arr2D_One[i][j] + arr2D_Two[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr2D_Sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}