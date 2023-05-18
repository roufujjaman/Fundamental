#include <stdio.h>
int main() {
    int count, order = 0;
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &order);
    for (int i = 0; i < count - 1; i++)
    {
         for (int j = i + 1; j < count; j++)
         {
            //ascending order, int order = 0;
            if (arr[i] > arr[j] && order == 0)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            //descending order, int order = 1;
            if (arr[i] < arr[j] && order == 1)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
         }
    }
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
