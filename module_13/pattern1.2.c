#include <stdio.h>
int main() {
    int count;
    scanf("%d", &count);
    int countK = count;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < countK; j++)
        {
            printf("*");
        }
        countK--;
        printf("\n");
    }
    return 0;
}

//6
// ******
// *****
// ****
// ***
// **
// *