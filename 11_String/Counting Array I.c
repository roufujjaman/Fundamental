#include <stdio.h>
int main() {
    int count, init;
    scanf("%d", &count, &init);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    int arrCountN[5] = {0};
    for (int i = 0; i < count; i++)
    {
        if (arr[i] >= 0 && arr[i] <= 4)
        {
            arrCountN[arr[i]]++;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d - %d\n", i, arrCountN[i]);
    }
    return 0;
}