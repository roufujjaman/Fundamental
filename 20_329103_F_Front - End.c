#include <stdio.h>
int main()
{
    int num_value;
    scanf("%d", &num_value);

    int arr[num_value];
    for (int i = 0; i < num_value; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0, j = num_value - 1; i < j; i++, j--)
    {
        printf("%d %d ", arr[i], arr[j]);
    }
    if (num_value % 2 == 1) printf("%d", arr[((num_value + 1) / 2) - 1]);
    return 0;
}