#include<stdio.h>
int count_vowels(char * arr, int i)
{
    if (arr[i] == '\0') return 0;
    int count = count_vowels(arr, i + 1);
    if (arr[i] >= 'A' && arr[i] <= 'Z')
    {
        arr[i] = arr[i] + 32;
    }
    if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
    {
        return count + 1;
    }
    else
    {
        return count;
    }
}
int main()
{
    char arr[201];
    fgets(arr, 201, stdin);
    int vowels = count_vowels(arr, 0);
    printf("%d", vowels);
    return 0;
}