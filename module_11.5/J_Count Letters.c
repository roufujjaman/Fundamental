#include <stdio.h>
#include <string.h>
int main() {
    char inputString[10000001];
    int arrStringCount[26] = {0};
    scanf("%s", inputString);
    int count = strlen(inputString);
    for (int i = 0; i < count; i++)
    {
        arrStringCount[inputString[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arrStringCount[i] != 0)
        {
            printf("%c : %d\n", i + 'a', arrStringCount[i]);
        }
    }
    return 0;
}