#include <stdio.h>
int main() {
    int count, countK = 1;
    scanf("%d", &count);
    int countSpace = count - 1;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < countSpace; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < countK; j++)
        {
            printf("*");
        }
        countK++;
        countSpace--;
        printf("\n");
    }
    return 0;
}

// 6
//      *
//     **
//    ***
//   ****
//  *****
// ******