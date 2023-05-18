#include <stdio.h>
#include <string.h>
int main() {
    char arr[100001];
    scanf("%s", arr);
    int isPalindrome = 1;
    for (int i = 0, j = strlen(arr) - 1; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}