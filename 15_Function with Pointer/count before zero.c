#include <stdio.h>
int count_before_zero(int * arr, int count)
{
    int intCount = 0;
    for (int i = 0; i < count; i++)
    {
        if (*(arr + i) == 0)
        {
            break;
        }
        intCount++;
    }
    return intCount;
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
    int result = count_before_zero(arr, count);
    printf("%d", result);
    return 0;
}