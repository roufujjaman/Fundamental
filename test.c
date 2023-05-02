#include <stdio.h>
int main() {
    int count, space, c = 1;
    scanf("%d", &count);
    space = count - 1;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < c; j++)
        {
            printf("*");
        }
        space--;
        c += 2;
        printf("\n");
    }
    return 0;
}