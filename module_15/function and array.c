#include <stdio.h>

void fun(int arr[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d\n", *(arr + i));
    }
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    fun(arr, 5);

    return 0;
}