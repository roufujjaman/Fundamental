#include <stdio.h>
int main() {
    int count;
    scanf("%d", &count);
    int arr[count + 1];
    if (count == 0)
    {
        return 0;
    }
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    int pos, val;
    scanf("%d %d", &pos, &val);
    // count = 5, but for array its 6th position 
    for (int i = count; i >= pos + 1; i--)
    {
        arr[i] = arr[i -1];
    }
    arr[pos] = val;

    for (int i = 0; i <= count; i++)
    {
        printf("[%d]", arr[i]);
    }
    return 0;
}