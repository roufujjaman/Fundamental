#include <stdio.h>
int main() {
    int count;
    scanf("%d", &count);
    int n = count;
    for (int i = 0; i < count; i++)
    {
        for (size_t i = 0; i < n; i++)
        {
            printf("#");
        }
        n--;
        printf("\n");
    }
    return 0;
}