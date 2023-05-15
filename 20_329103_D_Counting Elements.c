#include <stdio.h>
int main()
{
    int numValues;
    scanf("%d", &numValues);

    int arr[numValues];
    for (int i = 0; i < numValues; i++)
    {
        scanf("%d", &arr[i]);
    }

    int elementCount = 0;
    for (int i = 0; i < numValues; i++)
    {
        for (int j = 0; j < numValues; j++)
        {
            if(arr[i] + 1 == arr[j])
            {
                elementCount++;
                break;
            }
        }
    }
    printf("%d", elementCount);
    return 0;
}