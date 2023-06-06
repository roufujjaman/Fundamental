#include<stdio.h>
#include<limits.h>
int maximum(int * arr, int count, int i)
{
    if (i == count) return INT_MIN;
    int max = maximum(arr, count, i + 1);
    if (arr[i] > max)
    {
        return arr[i];
    }
    else
    {
        return max;
    }
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
    int max = maximum(arr, count, 0);
    printf("%d", max);
    return 0;
}