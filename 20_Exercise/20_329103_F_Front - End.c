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
    for (int i = 0, j = num_value - 1; i <= j; i++, j--)
    {
        if (i == j) printf("%d", arr[i]);
        else printf("%d %d ", arr[i], arr[j]);
    }
    return 0;
}