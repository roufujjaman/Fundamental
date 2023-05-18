#include <stdio.h>
#include <string.h>
int main() {
    char one[100], two[100];
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
            printf("|A");
            break;
        }
        else if (two[i] > one[i])
        {
            printf("B|");
            break;
        }

        if (one[i] == '\0' && two[i] == '\0')
        {
            printf("|EQ|");
            break;
        }
        else if (one[i] == '\0')
        {
            printf("B|");
            break;
        }
        else if (two[i] == '\0')
        {
            printf("|A");
            break;
        }
    }
    printf("\n%s %s", one, two);
    return 0;
}