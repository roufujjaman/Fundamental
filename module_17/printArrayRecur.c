#include <stdio.h>
void printArrayRecur(int * arr, int index, int count)
{
    if (index == count) return; // Base case
    printf("%d ", arr[index]);
    return printArrayRecur(arr, index + 1, count);
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
    printArrayRecur(arr, 0, count);
    return 0;
}