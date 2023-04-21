#include <stdio.h>
#include <limits.h>
int main() {
    int count;
    scanf("%d", &count);
    if (count == 0)
    {
        return 0;
    }
    int arr[count + 1];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    int position;
    scanf("%d", &position);
    for (int i = position; i < count - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < count - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}