#include <stdio.h>
#include <string.h>
int main() {
    char arr[100001];
    scanf("%s", arr);
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == ',')
        {
            arr[i] = ' ';
        }
        else if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] -= 32;
        }
        else
        {
            arr[i] += 32;
        }
    }
    printf("%s", arr);
    return 0;
}

// Example
// input
// happy,NewYear,enjoy
// output
// HAPPY nEWyEAR ENJOY