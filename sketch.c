#include <stdio.h>
int main()
{
    int count;
    scanf("%d\n", &count);
    char arr[101];
    for (int i = 0; i < count; i++)
    {
        scanf("%s", arr);
        int len = 0;
        for (int j = 0; arr[j] != '\0'; j++)
        {
            len++;
        }
        if(len > 10) printf("%c%d%c\n", arr[0], len - 2, arr[len - 1]);
        else printf("%s", arr);
    }
    
    return 0;
}

// 10
// 0 1 2 3 4 5 6 7 8 9
// 0, 10-1