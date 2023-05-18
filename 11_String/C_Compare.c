#include <stdio.h>
#include <string.h>
int main() {
    char one[21], two[21];
    scanf("%s %s", &one, &two);
    int i = 0;
    while (1)
    {
        if (one[i] == two[i])
        {
            i++;
        }
        else if (one[i] > two[i])
        {
            printf("%s", two);
            break;
        }
        else if (two[i] > one[i])
        {
            printf("%s", one);
            break;
        }

        if (one[i] == '\0' && two[i] == '\0')
        {
            printf("%s", one);
            break;
        }
        else if (one[i] == '\0')
        {
            printf("%s", one);
            break;
        }
        else if (two[i] == '\0')
        {
            printf("%s", two);
            break;
        }
    }
    return 0;
}