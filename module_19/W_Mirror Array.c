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

    for (int i = 0; i < row; i++)
    {
        int j = 0, k = col - 1;
        while (j < k)
        {
            int temp = arr2D[i][j];
            arr2D[i][j] = arr2D[i][k];
            arr2D[i][k] = temp;
            j++;
            k--;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr2D[i][j]);
        }
        printf("\n");
    }
    return 0;
}