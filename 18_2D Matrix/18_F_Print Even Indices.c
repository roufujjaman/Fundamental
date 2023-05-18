//https://codeforces.com/group/MWSDmqGsZm/contest/223339
#include <stdio.h>
void printEvenIndicesRec(int * arr, int count, int i)
{
    if (i == count) return;
    printEvenIndicesRec(arr, count, i + 1);
    if (i % 2 == 0)
    {
        printf("%d ", arr[i]);
    }
    return;
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
    printEvenIndicesRec(arr, count, 0);
    return 0;
}