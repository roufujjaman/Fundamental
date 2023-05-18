#include <stdio.h>
#include <limits.h>
int main()
{
    int num_value, current_count, max_count = INT_MIN;
    scanf("%d", &num_value);

    long long int arr[num_value];
    for (int i = 0; i < num_value; i++)
    {
        scanf("%lld", &arr[i]);
        current_count = 0;
        while (arr[i] % 2 == 0)
        {
            arr[i] = arr[i] / 2;
            current_count++;
        }
        if (current_count > max_count) max_count = current_count;
    }
    printf("%d", max_count);
    return 0;
}

// while (arr[i] && (arr[i] & 1) == 0)
// {
//     current_count++;
//     arr[i] >>= 1;
// }