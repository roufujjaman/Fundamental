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
    for (int i = 0; i < numValues; i++)
    {
        if(arr[i] == 0)
        {
            int j = 0, k = i - 1;
            while (j < k)
            {
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
                j++, k--;
            }
        }
    }
    for ( int i = 0; i < numValues; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}