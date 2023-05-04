#include <stdio.h>
int main() {
    int count, compare;
    scanf("%d %d", &count, &compare);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    int countN = count - 1;
    int countK = count - 1;
    int indexJ = 1;
    for (int i = 0; i < countN; i++)
    {
        for (int j = indexJ; j <= countK; j++)
        {
            printf("%d %d\n", i, j);
            if (arr[i] + arr[j] == compare)
            {
                printf("%d + %d = %d\n", arr[i], arr[j], compare);
                break;
            }
        }
        indexJ++;
    }
    return 0;
}
