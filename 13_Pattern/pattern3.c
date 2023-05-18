#include <stdio.h>
int main() {
    int count;
    scanf("%d", &count);
    int countSpace = count - 1;
    int countK = 1;
    int countN = count * 2 - 1;
    for (int i = 0; i < countN; i++)
    {
        printf("%d\t", i);
        for (int j = 0; j < countSpace; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < countK; j++)
        {
            printf("0");
        }
        printf("\n");
        if (i < count - 1)
        {
            countSpace--;
            countK += 2;
        }
        else
        {
            countSpace++;
            countK -= 2;
        }
    }
    return 0;
}

// 6
// 0            0
// 1           000
// 2          00000
// 3         0000000
// 4        000000000
// 5       00000000000
// 6        000000000
// 7         0000000
// 8          00000
// 9           000
// 10           0