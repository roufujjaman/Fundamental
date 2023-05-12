#include<stdio.h>
long long int arrSummationRec(long long int * arr, int count)
{
    if (count == 0) return 0;
    long long int sum = arrSummationRec(arr, count - 1);
    return sum + arr[count - 1];
}

int main()
{
    int count;
    scanf("%d", &count);
    long long int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int sum = arrSummationRec(arr, count);
    printf("%lld", sum);
    return 0;
}