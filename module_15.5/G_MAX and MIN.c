#include <stdio.h>
#include<limits.h>
void MinAndMax(int * arr, int count)
{
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < count; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d %d", min, max);
}
int main()
{
    int count;
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    MinAndMax(arr, count);
    return 0;
}