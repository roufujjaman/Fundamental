#include <stdio.h>
#include <limits.h>
int main() {
    int countOne;
    scanf("%d", &countOne);
    int arrOne[countOne];
    for (int i = 0; i < countOne; i++)
    {
        scanf("%d", &arrOne[i]);
    }
    int countTwo;
    scanf("%d", &countTwo);
    int arrTwo[countTwo];
    for (int i = 0; i < countTwo; i++)
    {
        scanf("%d", &arrTwo[i]);
    }
    int arr[countOne + countOne];
    for (int i = 0; i < countOne; i++)
    {
        arr[i] = arrOne[i];
    }
    int j = countOne;
    for (int i = 0; i < countTwo; i++)
    {
        arr[j] = arrTwo[i];
        j++;
    }
    int count = countOne + countTwo;
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}