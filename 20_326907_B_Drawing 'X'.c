#include <stdio.h>
int main()
{
    int count;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (i == count / 2 && j == count / 2)
            {
                printf("X");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}