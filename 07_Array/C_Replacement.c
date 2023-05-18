//          C. Replacement
#include <stdio.h>
int main()
{
    int count;
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < count; i++)
    {
        if (arr[i] > 0)
        {
            arr[i] = 1;
        }
        else if (arr[i] < 0)
        {
            arr[i] = 2;
        }
        else
        {
            arr[i] = 0;
        }
        printf("%d ", arr[i]);
    }
    return 0;
    
}