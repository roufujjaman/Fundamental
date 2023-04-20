#include <stdio.h>
#include <limits.h>
int main() {
    int count;
    scanf("%d", &count);
    int arr[count + 1];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    ijjJJJJt 
    for (int i = 0; i < count; i++)
    {
        printf("[%d]", arr[i]);
    }
    printf("\n");
    int position, value;
    scanf("%d %d", &position, &value);
    int i;
    for (i = count; i > position; i--)
    {
        arr[i] = arr[i - 1];
    } arr[i] = 0;
    for (int i = 0; i < count + 1; i++)
    {
        printf("[%d]", arr[i]);
    }
    return 0;
}