#include <stdio.h>
#include <limits.h>
int main() {
    int count;
    scanf("%d", &count);
    if (count == 0)
    {
        return 0;
    }
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = count - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}