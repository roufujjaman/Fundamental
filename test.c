#include <stdio.h>
int main()
{
    int arr2D[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr2D[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", arr2D[i][j]);
        }
    }
    return 0;
}