#include <stdio.h>
#include <limits.h>
int main() {
    int count, min = INT_MAX, max = INT_MIN, positionMin, positionMax;
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < min)
        {
            min = arr[i];
            positionMin = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            positionMax = i;
        }   
    }
    int temp = arr[positionMin];
    arr[positionMin] = arr[positionMax];
    arr[positionMax] = temp;
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}