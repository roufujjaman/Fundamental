#include <stdio.h>
#include <string.h>
int is_palindrome(char arr[])
{

    int isPalindrome = 1;
    for (int i = 0, j = strlen(arr) - 1; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            isPalindrome = 0;
            break;
        }
    }
    return isPalindrome;
}
int main()
{
    char arr[11];
    scanf("%s", &arr);
    int result = is_palindrome(arr);
    if (result == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}