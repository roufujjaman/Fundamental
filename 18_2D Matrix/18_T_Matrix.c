#include<stdio.h>
#include<stdlib.h>
int main()
{
    int count;
    scanf("%d", &count);
    int arr2D[count][count];
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            scanf("%d", &arr2D[i][j]);
        }
    }
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (i == j)
            {
                primaryDiagonalSum += arr2D[i][j];
            }
            if (i + j == count - 1)
            {
                secondaryDiagonalSum += arr2D[i][j];
            }
        }
    }
    int res = abs(primaryDiagonalSum - secondaryDiagonalSum);
    printf("%d", res);
    return 0;
}