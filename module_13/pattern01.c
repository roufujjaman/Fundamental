#include <stdio.h>
int main() {
    int n;
    int k = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        k++;
        printf("\n");
    }
    return 0;
}