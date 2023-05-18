#include <stdio.h>
int main() {
    int count, max_num_len;
    scanf("%d %d", &count, &max_num_len);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    //selection sort
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    long long int sum = 0;
    for (int i = 0; i < max_num_len; i++)
    {
        if (arr[i] > 0) sum += arr[i];
    }
    printf("%lld", sum);
    return 0;
}