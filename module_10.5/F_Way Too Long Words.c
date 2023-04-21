#include <stdio.h>
#include <string.h>
int main() {
    int count;
    scanf("%d", &count);
    char input[count][101];
    for (int i = 0; i < count; i++)
    {
        scanf("%s", &input[i]);
    }
    for (int i = 0; i < count; i++)
    {
        if (strlen(input[i]) <= 10)
        {
            printf("%s\n", input[i]);
        }
        else
        {
            printf("%c%d%c\n", input[i][0], strlen(input[i]) - 2, input[i][strlen(input[i]) - 1]);
        }
    }
    
    return 0;
}

// Example
// input

// 4
// word
// localization
// internationalization
// pneumonoultramicroscopicsilicovolcanoconiosis

// output

// word
// l10n
// i18n
// p43s