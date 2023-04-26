#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char arr[1001];
    scanf("%s", &arr);
    int countAlphabet[26] = {0};
    for (int i = 0; arr[i] != '\0'; i++)
    {
        countAlphabet[arr[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 'a', countAlphabet[i]);
    }
    
}
