#include <stdio.h>
int main() {
    int count, width, length;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d %d", &width, &length);
        if (width == length)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }
    return 0;
}