#include <stdio.h>
int main()
{
    int arr2D[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 1, 2, 3},
        {4, 5, 6, 7}
    };
    //print first row
    for (int i = 0; i < 4; i++)
    {
        printf("%d", arr2D[i][0]);
    }
    return 0;
}