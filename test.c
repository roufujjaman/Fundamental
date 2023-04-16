#include <stdio.h>
int main() {
    int count;
    scanf("%d", &count);
    int arr[count + 1];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[count]);
    }
    int pos, val;
    scanf("%d %d", &pos, &val);

    for (int i = count; i <= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;

    for (int i = 0; i < count + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    
    

    
    return 0;
}