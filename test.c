#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char arr[100];
    scanf("%s", arr);
    int charCount[26] = {0};
    for (int i = 0; arr[i] != '\0'; i++)
    {
        charCount[arr[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (charCount[i] != 0)      
        {
            printf("%c - %d\n", i + 'a', charCount[i]);
        }
        
    }
    return 0;
}
