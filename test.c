#include <stdio.h>
#include<limits.h>
int main()
{
    int count, position;
    int min = INT_MAX;
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0 - 1 ; i < count; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            position = i+1;
        }
    }
    printf("%d %d", min, position);
    return 0;
}