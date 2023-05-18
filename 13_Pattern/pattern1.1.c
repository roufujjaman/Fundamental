#include <stdio.h>
int main() {
    int count, countK = 1;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < countK; j++)
        {
            printf("*");
        }
        countK++;
        printf("\n");
    }
    return 0;
}

// 6
// *
// **
// ***
// ****
// *****
// ******