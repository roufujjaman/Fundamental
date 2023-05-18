#include <stdio.h>
int main() {
    int count, compare, flag = 0;
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &compare);
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arr[i] + arr[j] == compare)
            {
                flag++;
            }
        }
    }
    if (flag == 0)
    {
        printf("NOT FOUND");
    }
    else
    {
        printf("%d FOUND", flag);
    }
    return 0;
}
