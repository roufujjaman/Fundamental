//          Searching
#include <stdio.h>
int main()
{
    int count, query, index = -1;
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &query);
    for (int i = 0; i < count; i++)
    {
        if (arr[i] == query)
        {
            index = i;
            break;
        }
    }
    printf("%d", index);
    return 0;
}